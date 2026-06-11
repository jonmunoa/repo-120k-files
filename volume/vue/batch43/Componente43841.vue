<template>
  <section class="panel-43841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43841");
const base = ref(43841);
const total = computed(() => base.value * 2);

function incrementar43841() {
  base.value++;
}
</script>
