<template>
  <section class="panel-57525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57525");
const base = ref(57525);
const total = computed(() => base.value * 2);

function incrementar57525() {
  base.value++;
}
</script>
