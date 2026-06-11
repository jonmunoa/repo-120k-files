<template>
  <section class="panel-9053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9053");
const base = ref(9053);
const total = computed(() => base.value * 2);

function incrementar9053() {
  base.value++;
}
</script>
