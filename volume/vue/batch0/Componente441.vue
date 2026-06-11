<template>
  <section class="panel-441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 441");
const base = ref(441);
const total = computed(() => base.value * 2);

function incrementar441() {
  base.value++;
}
</script>
