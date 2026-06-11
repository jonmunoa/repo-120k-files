<template>
  <section class="panel-1965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1965");
const base = ref(1965);
const total = computed(() => base.value * 2);

function incrementar1965() {
  base.value++;
}
</script>
