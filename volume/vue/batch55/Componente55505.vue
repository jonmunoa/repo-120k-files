<template>
  <section class="panel-55505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55505");
const base = ref(55505);
const total = computed(() => base.value * 2);

function incrementar55505() {
  base.value++;
}
</script>
