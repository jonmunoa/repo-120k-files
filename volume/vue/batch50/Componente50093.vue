<template>
  <section class="panel-50093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50093");
const base = ref(50093);
const total = computed(() => base.value * 2);

function incrementar50093() {
  base.value++;
}
</script>
