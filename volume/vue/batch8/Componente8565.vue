<template>
  <section class="panel-8565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8565");
const base = ref(8565);
const total = computed(() => base.value * 2);

function incrementar8565() {
  base.value++;
}
</script>
