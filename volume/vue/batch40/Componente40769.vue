<template>
  <section class="panel-40769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40769");
const base = ref(40769);
const total = computed(() => base.value * 2);

function incrementar40769() {
  base.value++;
}
</script>
