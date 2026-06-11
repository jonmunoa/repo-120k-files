<template>
  <section class="panel-10841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10841");
const base = ref(10841);
const total = computed(() => base.value * 2);

function incrementar10841() {
  base.value++;
}
</script>
