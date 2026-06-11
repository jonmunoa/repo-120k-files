<template>
  <section class="panel-6841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6841");
const base = ref(6841);
const total = computed(() => base.value * 2);

function incrementar6841() {
  base.value++;
}
</script>
