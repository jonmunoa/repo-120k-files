<template>
  <section class="panel-57457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57457");
const base = ref(57457);
const total = computed(() => base.value * 2);

function incrementar57457() {
  base.value++;
}
</script>
