<template>
  <section class="panel-23945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23945");
const base = ref(23945);
const total = computed(() => base.value * 2);

function incrementar23945() {
  base.value++;
}
</script>
