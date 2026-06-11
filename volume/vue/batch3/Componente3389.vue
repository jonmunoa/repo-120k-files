<template>
  <section class="panel-3389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3389");
const base = ref(3389);
const total = computed(() => base.value * 2);

function incrementar3389() {
  base.value++;
}
</script>
