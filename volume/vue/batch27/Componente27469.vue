<template>
  <section class="panel-27469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27469");
const base = ref(27469);
const total = computed(() => base.value * 2);

function incrementar27469() {
  base.value++;
}
</script>
