<template>
  <section class="panel-15513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15513");
const base = ref(15513);
const total = computed(() => base.value * 2);

function incrementar15513() {
  base.value++;
}
</script>
