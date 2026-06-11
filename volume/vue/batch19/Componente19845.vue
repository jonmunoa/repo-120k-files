<template>
  <section class="panel-19845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19845");
const base = ref(19845);
const total = computed(() => base.value * 2);

function incrementar19845() {
  base.value++;
}
</script>
