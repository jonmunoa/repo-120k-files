<template>
  <section class="panel-12449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12449");
const base = ref(12449);
const total = computed(() => base.value * 2);

function incrementar12449() {
  base.value++;
}
</script>
