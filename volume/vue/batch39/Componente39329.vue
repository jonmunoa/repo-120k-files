<template>
  <section class="panel-39329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39329");
const base = ref(39329);
const total = computed(() => base.value * 2);

function incrementar39329() {
  base.value++;
}
</script>
