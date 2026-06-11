<template>
  <section class="panel-6969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6969");
const base = ref(6969);
const total = computed(() => base.value * 2);

function incrementar6969() {
  base.value++;
}
</script>
