<template>
  <section class="panel-20257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20257");
const base = ref(20257);
const total = computed(() => base.value * 2);

function incrementar20257() {
  base.value++;
}
</script>
