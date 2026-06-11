<template>
  <section class="panel-8837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8837");
const base = ref(8837);
const total = computed(() => base.value * 2);

function incrementar8837() {
  base.value++;
}
</script>
