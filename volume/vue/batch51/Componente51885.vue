<template>
  <section class="panel-51885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51885");
const base = ref(51885);
const total = computed(() => base.value * 2);

function incrementar51885() {
  base.value++;
}
</script>
