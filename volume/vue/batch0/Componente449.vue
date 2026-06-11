<template>
  <section class="panel-449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 449");
const base = ref(449);
const total = computed(() => base.value * 2);

function incrementar449() {
  base.value++;
}
</script>
