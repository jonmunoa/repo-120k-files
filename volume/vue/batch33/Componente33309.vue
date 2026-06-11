<template>
  <section class="panel-33309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33309");
const base = ref(33309);
const total = computed(() => base.value * 2);

function incrementar33309() {
  base.value++;
}
</script>
