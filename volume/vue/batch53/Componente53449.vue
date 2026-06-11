<template>
  <section class="panel-53449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53449");
const base = ref(53449);
const total = computed(() => base.value * 2);

function incrementar53449() {
  base.value++;
}
</script>
