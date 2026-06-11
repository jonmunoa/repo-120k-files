<template>
  <section class="panel-44845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44845");
const base = ref(44845);
const total = computed(() => base.value * 2);

function incrementar44845() {
  base.value++;
}
</script>
