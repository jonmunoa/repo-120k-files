<template>
  <section class="panel-39885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39885");
const base = ref(39885);
const total = computed(() => base.value * 2);

function incrementar39885() {
  base.value++;
}
</script>
