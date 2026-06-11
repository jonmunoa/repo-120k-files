<template>
  <section class="panel-56841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56841");
const base = ref(56841);
const total = computed(() => base.value * 2);

function incrementar56841() {
  base.value++;
}
</script>
