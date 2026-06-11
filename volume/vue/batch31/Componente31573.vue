<template>
  <section class="panel-31573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31573");
const base = ref(31573);
const total = computed(() => base.value * 2);

function incrementar31573() {
  base.value++;
}
</script>
