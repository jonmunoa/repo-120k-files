<template>
  <section class="panel-12025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12025");
const base = ref(12025);
const total = computed(() => base.value * 2);

function incrementar12025() {
  base.value++;
}
</script>
