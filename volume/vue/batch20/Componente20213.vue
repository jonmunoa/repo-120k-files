<template>
  <section class="panel-20213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20213");
const base = ref(20213);
const total = computed(() => base.value * 2);

function incrementar20213() {
  base.value++;
}
</script>
