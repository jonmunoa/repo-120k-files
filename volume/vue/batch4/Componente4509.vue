<template>
  <section class="panel-4509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4509");
const base = ref(4509);
const total = computed(() => base.value * 2);

function incrementar4509() {
  base.value++;
}
</script>
