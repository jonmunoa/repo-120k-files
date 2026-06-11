<template>
  <section class="panel-11297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11297");
const base = ref(11297);
const total = computed(() => base.value * 2);

function incrementar11297() {
  base.value++;
}
</script>
