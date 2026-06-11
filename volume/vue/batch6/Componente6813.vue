<template>
  <section class="panel-6813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6813");
const base = ref(6813);
const total = computed(() => base.value * 2);

function incrementar6813() {
  base.value++;
}
</script>
