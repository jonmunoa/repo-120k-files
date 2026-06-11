<template>
  <section class="panel-969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 969");
const base = ref(969);
const total = computed(() => base.value * 2);

function incrementar969() {
  base.value++;
}
</script>
