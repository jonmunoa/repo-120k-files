<template>
  <section class="panel-57437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57437");
const base = ref(57437);
const total = computed(() => base.value * 2);

function incrementar57437() {
  base.value++;
}
</script>
