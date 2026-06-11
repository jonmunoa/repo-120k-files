<template>
  <section class="panel-24137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24137");
const base = ref(24137);
const total = computed(() => base.value * 2);

function incrementar24137() {
  base.value++;
}
</script>
