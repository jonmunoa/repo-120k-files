<template>
  <section class="panel-10993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10993");
const base = ref(10993);
const total = computed(() => base.value * 2);

function incrementar10993() {
  base.value++;
}
</script>
