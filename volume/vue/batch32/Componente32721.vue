<template>
  <section class="panel-32721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32721");
const base = ref(32721);
const total = computed(() => base.value * 2);

function incrementar32721() {
  base.value++;
}
</script>
