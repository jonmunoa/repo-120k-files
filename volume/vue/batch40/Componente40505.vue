<template>
  <section class="panel-40505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40505");
const base = ref(40505);
const total = computed(() => base.value * 2);

function incrementar40505() {
  base.value++;
}
</script>
