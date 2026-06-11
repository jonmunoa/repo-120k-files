<template>
  <section class="panel-4257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4257");
const base = ref(4257);
const total = computed(() => base.value * 2);

function incrementar4257() {
  base.value++;
}
</script>
