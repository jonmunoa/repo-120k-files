<template>
  <section class="panel-8125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8125");
const base = ref(8125);
const total = computed(() => base.value * 2);

function incrementar8125() {
  base.value++;
}
</script>
