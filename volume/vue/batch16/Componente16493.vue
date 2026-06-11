<template>
  <section class="panel-16493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16493");
const base = ref(16493);
const total = computed(() => base.value * 2);

function incrementar16493() {
  base.value++;
}
</script>
