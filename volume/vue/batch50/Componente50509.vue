<template>
  <section class="panel-50509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50509");
const base = ref(50509);
const total = computed(() => base.value * 2);

function incrementar50509() {
  base.value++;
}
</script>
