<template>
  <section class="panel-4053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4053");
const base = ref(4053);
const total = computed(() => base.value * 2);

function incrementar4053() {
  base.value++;
}
</script>
