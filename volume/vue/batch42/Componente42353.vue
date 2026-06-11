<template>
  <section class="panel-42353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42353");
const base = ref(42353);
const total = computed(() => base.value * 2);

function incrementar42353() {
  base.value++;
}
</script>
