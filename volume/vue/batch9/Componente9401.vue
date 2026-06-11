<template>
  <section class="panel-9401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9401");
const base = ref(9401);
const total = computed(() => base.value * 2);

function incrementar9401() {
  base.value++;
}
</script>
