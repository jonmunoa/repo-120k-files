<template>
  <section class="panel-30209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30209");
const base = ref(30209);
const total = computed(() => base.value * 2);

function incrementar30209() {
  base.value++;
}
</script>
