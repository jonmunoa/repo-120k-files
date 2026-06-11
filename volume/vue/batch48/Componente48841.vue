<template>
  <section class="panel-48841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48841");
const base = ref(48841);
const total = computed(() => base.value * 2);

function incrementar48841() {
  base.value++;
}
</script>
