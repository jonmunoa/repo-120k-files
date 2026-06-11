<template>
  <section class="panel-47505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47505");
const base = ref(47505);
const total = computed(() => base.value * 2);

function incrementar47505() {
  base.value++;
}
</script>
