<template>
  <section class="panel-20841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20841");
const base = ref(20841);
const total = computed(() => base.value * 2);

function incrementar20841() {
  base.value++;
}
</script>
