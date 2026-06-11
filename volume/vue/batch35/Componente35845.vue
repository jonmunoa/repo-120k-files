<template>
  <section class="panel-35845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35845");
const base = ref(35845);
const total = computed(() => base.value * 2);

function incrementar35845() {
  base.value++;
}
</script>
