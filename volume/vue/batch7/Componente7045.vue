<template>
  <section class="panel-7045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7045");
const base = ref(7045);
const total = computed(() => base.value * 2);

function incrementar7045() {
  base.value++;
}
</script>
