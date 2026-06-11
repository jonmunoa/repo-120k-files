<template>
  <section class="panel-52513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52513");
const base = ref(52513);
const total = computed(() => base.value * 2);

function incrementar52513() {
  base.value++;
}
</script>
