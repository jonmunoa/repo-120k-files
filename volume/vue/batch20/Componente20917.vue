<template>
  <section class="panel-20917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20917");
const base = ref(20917);
const total = computed(() => base.value * 2);

function incrementar20917() {
  base.value++;
}
</script>
