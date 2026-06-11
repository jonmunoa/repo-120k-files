<template>
  <section class="panel-8917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8917");
const base = ref(8917);
const total = computed(() => base.value * 2);

function incrementar8917() {
  base.value++;
}
</script>
