<template>
  <section class="panel-51257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51257");
const base = ref(51257);
const total = computed(() => base.value * 2);

function incrementar51257() {
  base.value++;
}
</script>
