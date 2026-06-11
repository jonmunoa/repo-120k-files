<template>
  <section class="panel-47221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47221");
const base = ref(47221);
const total = computed(() => base.value * 2);

function incrementar47221() {
  base.value++;
}
</script>
