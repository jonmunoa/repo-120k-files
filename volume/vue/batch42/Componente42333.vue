<template>
  <section class="panel-42333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42333");
const base = ref(42333);
const total = computed(() => base.value * 2);

function incrementar42333() {
  base.value++;
}
</script>
