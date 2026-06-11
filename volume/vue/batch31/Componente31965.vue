<template>
  <section class="panel-31965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31965");
const base = ref(31965);
const total = computed(() => base.value * 2);

function incrementar31965() {
  base.value++;
}
</script>
