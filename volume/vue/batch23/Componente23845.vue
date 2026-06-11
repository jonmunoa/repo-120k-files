<template>
  <section class="panel-23845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23845");
const base = ref(23845);
const total = computed(() => base.value * 2);

function incrementar23845() {
  base.value++;
}
</script>
