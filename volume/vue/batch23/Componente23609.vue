<template>
  <section class="panel-23609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23609");
const base = ref(23609);
const total = computed(() => base.value * 2);

function incrementar23609() {
  base.value++;
}
</script>
