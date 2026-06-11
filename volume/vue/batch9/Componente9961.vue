<template>
  <section class="panel-9961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9961");
const base = ref(9961);
const total = computed(() => base.value * 2);

function incrementar9961() {
  base.value++;
}
</script>
