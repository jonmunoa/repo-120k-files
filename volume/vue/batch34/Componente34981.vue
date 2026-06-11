<template>
  <section class="panel-34981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34981");
const base = ref(34981);
const total = computed(() => base.value * 2);

function incrementar34981() {
  base.value++;
}
</script>
