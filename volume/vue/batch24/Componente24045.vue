<template>
  <section class="panel-24045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24045");
const base = ref(24045);
const total = computed(() => base.value * 2);

function incrementar24045() {
  base.value++;
}
</script>
