<template>
  <section class="panel-30673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30673");
const base = ref(30673);
const total = computed(() => base.value * 2);

function incrementar30673() {
  base.value++;
}
</script>
