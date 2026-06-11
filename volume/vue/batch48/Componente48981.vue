<template>
  <section class="panel-48981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48981");
const base = ref(48981);
const total = computed(() => base.value * 2);

function incrementar48981() {
  base.value++;
}
</script>
