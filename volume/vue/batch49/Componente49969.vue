<template>
  <section class="panel-49969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49969");
const base = ref(49969);
const total = computed(() => base.value * 2);

function incrementar49969() {
  base.value++;
}
</script>
