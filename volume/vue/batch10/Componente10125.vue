<template>
  <section class="panel-10125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10125");
const base = ref(10125);
const total = computed(() => base.value * 2);

function incrementar10125() {
  base.value++;
}
</script>
