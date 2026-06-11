<template>
  <section class="panel-10297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10297");
const base = ref(10297);
const total = computed(() => base.value * 2);

function incrementar10297() {
  base.value++;
}
</script>
