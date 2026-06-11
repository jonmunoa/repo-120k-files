<template>
  <section class="panel-57917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57917");
const base = ref(57917);
const total = computed(() => base.value * 2);

function incrementar57917() {
  base.value++;
}
</script>
