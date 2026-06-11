<template>
  <section class="panel-6545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6545");
const base = ref(6545);
const total = computed(() => base.value * 2);

function incrementar6545() {
  base.value++;
}
</script>
