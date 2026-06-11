<template>
  <section class="panel-509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 509");
const base = ref(509);
const total = computed(() => base.value * 2);

function incrementar509() {
  base.value++;
}
</script>
