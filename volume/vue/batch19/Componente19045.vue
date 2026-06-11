<template>
  <section class="panel-19045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19045");
const base = ref(19045);
const total = computed(() => base.value * 2);

function incrementar19045() {
  base.value++;
}
</script>
