<template>
  <section class="panel-21969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21969");
const base = ref(21969);
const total = computed(() => base.value * 2);

function incrementar21969() {
  base.value++;
}
</script>
