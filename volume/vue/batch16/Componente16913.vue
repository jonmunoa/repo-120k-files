<template>
  <section class="panel-16913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16913");
const base = ref(16913);
const total = computed(() => base.value * 2);

function incrementar16913() {
  base.value++;
}
</script>
