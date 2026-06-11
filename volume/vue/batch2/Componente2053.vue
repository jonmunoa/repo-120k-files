<template>
  <section class="panel-2053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2053");
const base = ref(2053);
const total = computed(() => base.value * 2);

function incrementar2053() {
  base.value++;
}
</script>
