<template>
  <section class="panel-24965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24965");
const base = ref(24965);
const total = computed(() => base.value * 2);

function incrementar24965() {
  base.value++;
}
</script>
