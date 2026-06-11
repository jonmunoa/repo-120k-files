<template>
  <section class="panel-57613">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57613");
const base = ref(57613);
const total = computed(() => base.value * 2);

function incrementar57613() {
  base.value++;
}
</script>
