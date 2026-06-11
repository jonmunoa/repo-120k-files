<template>
  <section class="panel-54509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54509");
const base = ref(54509);
const total = computed(() => base.value * 2);

function incrementar54509() {
  base.value++;
}
</script>
