<template>
  <section class="panel-5389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5389");
const base = ref(5389);
const total = computed(() => base.value * 2);

function incrementar5389() {
  base.value++;
}
</script>
