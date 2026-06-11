<template>
  <section class="panel-42897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42897");
const base = ref(42897);
const total = computed(() => base.value * 2);

function incrementar42897() {
  base.value++;
}
</script>
