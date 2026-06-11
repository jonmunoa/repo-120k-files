<template>
  <section class="panel-31045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31045");
const base = ref(31045);
const total = computed(() => base.value * 2);

function incrementar31045() {
  base.value++;
}
</script>
