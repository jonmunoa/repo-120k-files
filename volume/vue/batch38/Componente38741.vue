<template>
  <section class="panel-38741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38741");
const base = ref(38741);
const total = computed(() => base.value * 2);

function incrementar38741() {
  base.value++;
}
</script>
