<template>
  <section class="panel-49897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49897");
const base = ref(49897);
const total = computed(() => base.value * 2);

function incrementar49897() {
  base.value++;
}
</script>
