<template>
  <section class="panel-20077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20077");
const base = ref(20077);
const total = computed(() => base.value * 2);

function incrementar20077() {
  base.value++;
}
</script>
