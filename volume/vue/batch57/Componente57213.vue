<template>
  <section class="panel-57213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57213");
const base = ref(57213);
const total = computed(() => base.value * 2);

function incrementar57213() {
  base.value++;
}
</script>
