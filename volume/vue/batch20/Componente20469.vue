<template>
  <section class="panel-20469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20469");
const base = ref(20469);
const total = computed(() => base.value * 2);

function incrementar20469() {
  base.value++;
}
</script>
