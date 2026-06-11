<template>
  <section class="panel-6045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6045");
const base = ref(6045);
const total = computed(() => base.value * 2);

function incrementar6045() {
  base.value++;
}
</script>
