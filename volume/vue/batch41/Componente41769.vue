<template>
  <section class="panel-41769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41769");
const base = ref(41769);
const total = computed(() => base.value * 2);

function incrementar41769() {
  base.value++;
}
</script>
