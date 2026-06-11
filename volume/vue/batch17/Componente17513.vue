<template>
  <section class="panel-17513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17513");
const base = ref(17513);
const total = computed(() => base.value * 2);

function incrementar17513() {
  base.value++;
}
</script>
