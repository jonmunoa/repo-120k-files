<template>
  <section class="panel-21389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21389");
const base = ref(21389);
const total = computed(() => base.value * 2);

function incrementar21389() {
  base.value++;
}
</script>
