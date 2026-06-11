<template>
  <section class="panel-57237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57237");
const base = ref(57237);
const total = computed(() => base.value * 2);

function incrementar57237() {
  base.value++;
}
</script>
