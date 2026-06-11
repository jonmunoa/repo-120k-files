<template>
  <section class="panel-49833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49833");
const base = ref(49833);
const total = computed(() => base.value * 2);

function incrementar49833() {
  base.value++;
}
</script>
