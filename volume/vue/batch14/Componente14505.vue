<template>
  <section class="panel-14505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14505");
const base = ref(14505);
const total = computed(() => base.value * 2);

function incrementar14505() {
  base.value++;
}
</script>
