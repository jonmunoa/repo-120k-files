<template>
  <section class="panel-43449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43449");
const base = ref(43449);
const total = computed(() => base.value * 2);

function incrementar43449() {
  base.value++;
}
</script>
