<template>
  <section class="panel-9965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9965");
const base = ref(9965);
const total = computed(() => base.value * 2);

function incrementar9965() {
  base.value++;
}
</script>
