<template>
  <section class="panel-833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 833");
const base = ref(833);
const total = computed(() => base.value * 2);

function incrementar833() {
  base.value++;
}
</script>
