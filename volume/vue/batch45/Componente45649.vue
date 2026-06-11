<template>
  <section class="panel-45649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45649");
const base = ref(45649);
const total = computed(() => base.value * 2);

function incrementar45649() {
  base.value++;
}
</script>
