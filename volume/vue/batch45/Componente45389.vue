<template>
  <section class="panel-45389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45389");
const base = ref(45389);
const total = computed(() => base.value * 2);

function incrementar45389() {
  base.value++;
}
</script>
