<template>
  <section class="panel-1833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1833");
const base = ref(1833);
const total = computed(() => base.value * 2);

function incrementar1833() {
  base.value++;
}
</script>
