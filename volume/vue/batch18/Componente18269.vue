<template>
  <section class="panel-18269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18269");
const base = ref(18269);
const total = computed(() => base.value * 2);

function incrementar18269() {
  base.value++;
}
</script>
