<template>
  <section class="panel-16537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16537");
const base = ref(16537);
const total = computed(() => base.value * 2);

function incrementar16537() {
  base.value++;
}
</script>
