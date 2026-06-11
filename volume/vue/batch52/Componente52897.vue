<template>
  <section class="panel-52897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52897");
const base = ref(52897);
const total = computed(() => base.value * 2);

function incrementar52897() {
  base.value++;
}
</script>
