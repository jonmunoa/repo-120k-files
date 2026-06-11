<template>
  <section class="panel-42449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42449");
const base = ref(42449);
const total = computed(() => base.value * 2);

function incrementar42449() {
  base.value++;
}
</script>
