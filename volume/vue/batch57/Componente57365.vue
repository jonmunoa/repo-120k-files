<template>
  <section class="panel-57365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57365");
const base = ref(57365);
const total = computed(() => base.value * 2);

function incrementar57365() {
  base.value++;
}
</script>
