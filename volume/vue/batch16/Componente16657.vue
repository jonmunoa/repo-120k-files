<template>
  <section class="panel-16657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16657");
const base = ref(16657);
const total = computed(() => base.value * 2);

function incrementar16657() {
  base.value++;
}
</script>
