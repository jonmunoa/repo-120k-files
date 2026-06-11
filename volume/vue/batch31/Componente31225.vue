<template>
  <section class="panel-31225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31225");
const base = ref(31225);
const total = computed(() => base.value * 2);

function incrementar31225() {
  base.value++;
}
</script>
