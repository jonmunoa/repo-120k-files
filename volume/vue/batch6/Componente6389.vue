<template>
  <section class="panel-6389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6389");
const base = ref(6389);
const total = computed(() => base.value * 2);

function incrementar6389() {
  base.value++;
}
</script>
