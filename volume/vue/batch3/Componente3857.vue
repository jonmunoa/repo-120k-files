<template>
  <section class="panel-3857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3857");
const base = ref(3857);
const total = computed(() => base.value * 2);

function incrementar3857() {
  base.value++;
}
</script>
