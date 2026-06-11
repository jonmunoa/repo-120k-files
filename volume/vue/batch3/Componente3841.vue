<template>
  <section class="panel-3841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3841");
const base = ref(3841);
const total = computed(() => base.value * 2);

function incrementar3841() {
  base.value++;
}
</script>
