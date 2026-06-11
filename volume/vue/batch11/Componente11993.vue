<template>
  <section class="panel-11993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11993");
const base = ref(11993);
const total = computed(() => base.value * 2);

function incrementar11993() {
  base.value++;
}
</script>
