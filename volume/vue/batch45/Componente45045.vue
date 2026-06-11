<template>
  <section class="panel-45045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45045");
const base = ref(45045);
const total = computed(() => base.value * 2);

function incrementar45045() {
  base.value++;
}
</script>
