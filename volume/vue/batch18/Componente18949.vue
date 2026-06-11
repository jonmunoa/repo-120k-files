<template>
  <section class="panel-18949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18949");
const base = ref(18949);
const total = computed(() => base.value * 2);

function incrementar18949() {
  base.value++;
}
</script>
