<template>
  <section class="panel-8533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8533");
const base = ref(8533);
const total = computed(() => base.value * 2);

function incrementar8533() {
  base.value++;
}
</script>
