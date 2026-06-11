<template>
  <section class="panel-54969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54969");
const base = ref(54969);
const total = computed(() => base.value * 2);

function incrementar54969() {
  base.value++;
}
</script>
