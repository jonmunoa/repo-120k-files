<template>
  <section class="panel-20053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20053");
const base = ref(20053);
const total = computed(() => base.value * 2);

function incrementar20053() {
  base.value++;
}
</script>
