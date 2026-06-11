<template>
  <section class="panel-29649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29649");
const base = ref(29649);
const total = computed(() => base.value * 2);

function incrementar29649() {
  base.value++;
}
</script>
