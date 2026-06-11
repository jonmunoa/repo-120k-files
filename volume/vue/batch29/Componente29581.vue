<template>
  <section class="panel-29581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29581");
const base = ref(29581);
const total = computed(() => base.value * 2);

function incrementar29581() {
  base.value++;
}
</script>
