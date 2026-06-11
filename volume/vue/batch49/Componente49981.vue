<template>
  <section class="panel-49981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49981");
const base = ref(49981);
const total = computed(() => base.value * 2);

function incrementar49981() {
  base.value++;
}
</script>
