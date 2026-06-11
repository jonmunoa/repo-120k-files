<template>
  <section class="panel-50513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50513");
const base = ref(50513);
const total = computed(() => base.value * 2);

function incrementar50513() {
  base.value++;
}
</script>
