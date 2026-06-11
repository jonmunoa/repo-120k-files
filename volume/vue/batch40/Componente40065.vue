<template>
  <section class="panel-40065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40065");
const base = ref(40065);
const total = computed(() => base.value * 2);

function incrementar40065() {
  base.value++;
}
</script>
