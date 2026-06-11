<template>
  <section class="panel-5981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5981");
const base = ref(5981);
const total = computed(() => base.value * 2);

function incrementar5981() {
  base.value++;
}
</script>
