<template>
  <section class="panel-31269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31269");
const base = ref(31269);
const total = computed(() => base.value * 2);

function incrementar31269() {
  base.value++;
}
</script>
