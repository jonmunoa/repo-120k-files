<template>
  <section class="panel-40169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40169");
const base = ref(40169);
const total = computed(() => base.value * 2);

function incrementar40169() {
  base.value++;
}
</script>
