<template>
  <section class="panel-50469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50469");
const base = ref(50469);
const total = computed(() => base.value * 2);

function incrementar50469() {
  base.value++;
}
</script>
