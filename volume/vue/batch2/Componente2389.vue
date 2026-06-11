<template>
  <section class="panel-2389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2389");
const base = ref(2389);
const total = computed(() => base.value * 2);

function incrementar2389() {
  base.value++;
}
</script>
