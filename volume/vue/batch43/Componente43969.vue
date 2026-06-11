<template>
  <section class="panel-43969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43969");
const base = ref(43969);
const total = computed(() => base.value * 2);

function incrementar43969() {
  base.value++;
}
</script>
