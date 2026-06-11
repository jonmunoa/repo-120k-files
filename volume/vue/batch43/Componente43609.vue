<template>
  <section class="panel-43609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43609");
const base = ref(43609);
const total = computed(() => base.value * 2);

function incrementar43609() {
  base.value++;
}
</script>
