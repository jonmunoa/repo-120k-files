<template>
  <section class="panel-8513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8513");
const base = ref(8513);
const total = computed(() => base.value * 2);

function incrementar8513() {
  base.value++;
}
</script>
