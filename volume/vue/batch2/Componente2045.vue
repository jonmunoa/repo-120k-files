<template>
  <section class="panel-2045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2045");
const base = ref(2045);
const total = computed(() => base.value * 2);

function incrementar2045() {
  base.value++;
}
</script>
