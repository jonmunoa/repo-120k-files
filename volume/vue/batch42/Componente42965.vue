<template>
  <section class="panel-42965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42965");
const base = ref(42965);
const total = computed(() => base.value * 2);

function incrementar42965() {
  base.value++;
}
</script>
