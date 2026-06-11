<template>
  <section class="panel-27505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27505");
const base = ref(27505);
const total = computed(() => base.value * 2);

function incrementar27505() {
  base.value++;
}
</script>
