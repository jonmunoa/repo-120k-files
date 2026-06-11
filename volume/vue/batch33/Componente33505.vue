<template>
  <section class="panel-33505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33505");
const base = ref(33505);
const total = computed(() => base.value * 2);

function incrementar33505() {
  base.value++;
}
</script>
