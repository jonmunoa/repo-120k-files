<template>
  <section class="panel-8969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8969");
const base = ref(8969);
const total = computed(() => base.value * 2);

function incrementar8969() {
  base.value++;
}
</script>
