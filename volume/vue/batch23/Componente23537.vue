<template>
  <section class="panel-23537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23537");
const base = ref(23537);
const total = computed(() => base.value * 2);

function incrementar23537() {
  base.value++;
}
</script>
