<template>
  <section class="panel-10505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10505");
const base = ref(10505);
const total = computed(() => base.value * 2);

function incrementar10505() {
  base.value++;
}
</script>
