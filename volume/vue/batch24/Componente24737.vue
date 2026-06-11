<template>
  <section class="panel-24737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24737");
const base = ref(24737);
const total = computed(() => base.value * 2);

function incrementar24737() {
  base.value++;
}
</script>
