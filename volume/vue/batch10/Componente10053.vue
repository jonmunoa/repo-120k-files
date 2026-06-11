<template>
  <section class="panel-10053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10053");
const base = ref(10053);
const total = computed(() => base.value * 2);

function incrementar10053() {
  base.value++;
}
</script>
