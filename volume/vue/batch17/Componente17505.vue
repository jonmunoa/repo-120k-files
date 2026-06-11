<template>
  <section class="panel-17505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17505");
const base = ref(17505);
const total = computed(() => base.value * 2);

function incrementar17505() {
  base.value++;
}
</script>
