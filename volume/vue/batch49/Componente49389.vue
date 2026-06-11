<template>
  <section class="panel-49389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49389");
const base = ref(49389);
const total = computed(() => base.value * 2);

function incrementar49389() {
  base.value++;
}
</script>
