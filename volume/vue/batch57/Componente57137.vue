<template>
  <section class="panel-57137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57137");
const base = ref(57137);
const total = computed(() => base.value * 2);

function incrementar57137() {
  base.value++;
}
</script>
