<template>
  <section class="panel-361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 361");
const base = ref(361);
const total = computed(() => base.value * 2);

function incrementar361() {
  base.value++;
}
</script>
