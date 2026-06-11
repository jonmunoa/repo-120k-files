<template>
  <section class="panel-2257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2257");
const base = ref(2257);
const total = computed(() => base.value * 2);

function incrementar2257() {
  base.value++;
}
</script>
