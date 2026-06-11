<template>
  <section class="panel-31769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31769");
const base = ref(31769);
const total = computed(() => base.value * 2);

function incrementar31769() {
  base.value++;
}
</script>
