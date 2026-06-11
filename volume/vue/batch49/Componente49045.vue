<template>
  <section class="panel-49045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49045");
const base = ref(49045);
const total = computed(() => base.value * 2);

function incrementar49045() {
  base.value++;
}
</script>
