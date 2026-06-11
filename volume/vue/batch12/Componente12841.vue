<template>
  <section class="panel-12841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12841");
const base = ref(12841);
const total = computed(() => base.value * 2);

function incrementar12841() {
  base.value++;
}
</script>
