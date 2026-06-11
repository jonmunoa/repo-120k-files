<template>
  <section class="panel-53749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53749");
const base = ref(53749);
const total = computed(() => base.value * 2);

function incrementar53749() {
  base.value++;
}
</script>
