<template>
  <section class="panel-38365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38365");
const base = ref(38365);
const total = computed(() => base.value * 2);

function incrementar38365() {
  base.value++;
}
</script>
