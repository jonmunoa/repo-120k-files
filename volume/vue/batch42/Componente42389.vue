<template>
  <section class="panel-42389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42389");
const base = ref(42389);
const total = computed(() => base.value * 2);

function incrementar42389() {
  base.value++;
}
</script>
