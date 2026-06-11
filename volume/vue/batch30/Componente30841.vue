<template>
  <section class="panel-30841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30841");
const base = ref(30841);
const total = computed(() => base.value * 2);

function incrementar30841() {
  base.value++;
}
</script>
