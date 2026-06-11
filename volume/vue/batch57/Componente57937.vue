<template>
  <section class="panel-57937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57937");
const base = ref(57937);
const total = computed(() => base.value * 2);

function incrementar57937() {
  base.value++;
}
</script>
