<template>
  <section class="panel-29513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29513");
const base = ref(29513);
const total = computed(() => base.value * 2);

function incrementar29513() {
  base.value++;
}
</script>
