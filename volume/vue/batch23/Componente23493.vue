<template>
  <section class="panel-23493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23493");
const base = ref(23493);
const total = computed(() => base.value * 2);

function incrementar23493() {
  base.value++;
}
</script>
