<template>
  <section class="panel-12917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12917");
const base = ref(12917);
const total = computed(() => base.value * 2);

function incrementar12917() {
  base.value++;
}
</script>
