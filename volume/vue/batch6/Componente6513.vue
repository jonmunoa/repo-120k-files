<template>
  <section class="panel-6513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6513");
const base = ref(6513);
const total = computed(() => base.value * 2);

function incrementar6513() {
  base.value++;
}
</script>
