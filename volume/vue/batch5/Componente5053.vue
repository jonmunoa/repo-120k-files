<template>
  <section class="panel-5053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5053");
const base = ref(5053);
const total = computed(() => base.value * 2);

function incrementar5053() {
  base.value++;
}
</script>
