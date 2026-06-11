<template>
  <section class="panel-44609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44609");
const base = ref(44609);
const total = computed(() => base.value * 2);

function incrementar44609() {
  base.value++;
}
</script>
