<template>
  <section class="panel-9761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9761");
const base = ref(9761);
const total = computed(() => base.value * 2);

function incrementar9761() {
  base.value++;
}
</script>
