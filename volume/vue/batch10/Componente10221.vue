<template>
  <section class="panel-10221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10221");
const base = ref(10221);
const total = computed(() => base.value * 2);

function incrementar10221() {
  base.value++;
}
</script>
