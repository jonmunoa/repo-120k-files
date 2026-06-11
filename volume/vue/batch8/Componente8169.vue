<template>
  <section class="panel-8169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8169");
const base = ref(8169);
const total = computed(() => base.value * 2);

function incrementar8169() {
  base.value++;
}
</script>
