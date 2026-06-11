<template>
  <section class="panel-2269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2269");
const base = ref(2269);
const total = computed(() => base.value * 2);

function incrementar2269() {
  base.value++;
}
</script>
