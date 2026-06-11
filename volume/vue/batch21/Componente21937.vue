<template>
  <section class="panel-21937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21937");
const base = ref(21937);
const total = computed(() => base.value * 2);

function incrementar21937() {
  base.value++;
}
</script>
