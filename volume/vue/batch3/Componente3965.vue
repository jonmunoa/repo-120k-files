<template>
  <section class="panel-3965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3965");
const base = ref(3965);
const total = computed(() => base.value * 2);

function incrementar3965() {
  base.value++;
}
</script>
