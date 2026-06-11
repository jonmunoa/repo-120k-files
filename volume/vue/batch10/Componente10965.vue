<template>
  <section class="panel-10965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10965");
const base = ref(10965);
const total = computed(() => base.value * 2);

function incrementar10965() {
  base.value++;
}
</script>
