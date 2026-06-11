<template>
  <section class="panel-50329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50329");
const base = ref(50329);
const total = computed(() => base.value * 2);

function incrementar50329() {
  base.value++;
}
</script>
