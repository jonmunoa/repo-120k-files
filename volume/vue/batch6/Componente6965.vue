<template>
  <section class="panel-6965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6965");
const base = ref(6965);
const total = computed(() => base.value * 2);

function incrementar6965() {
  base.value++;
}
</script>
