<template>
  <section class="panel-23981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23981");
const base = ref(23981);
const total = computed(() => base.value * 2);

function incrementar23981() {
  base.value++;
}
</script>
