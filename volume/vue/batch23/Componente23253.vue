<template>
  <section class="panel-23253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23253");
const base = ref(23253);
const total = computed(() => base.value * 2);

function incrementar23253() {
  base.value++;
}
</script>
