<template>
  <section class="panel-10541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10541");
const base = ref(10541);
const total = computed(() => base.value * 2);

function incrementar10541() {
  base.value++;
}
</script>
