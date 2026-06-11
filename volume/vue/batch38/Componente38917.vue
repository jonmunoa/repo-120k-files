<template>
  <section class="panel-38917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38917");
const base = ref(38917);
const total = computed(() => base.value * 2);

function incrementar38917() {
  base.value++;
}
</script>
