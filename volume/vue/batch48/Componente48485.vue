<template>
  <section class="panel-48485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48485");
const base = ref(48485);
const total = computed(() => base.value * 2);

function incrementar48485() {
  base.value++;
}
</script>
