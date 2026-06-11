<template>
  <section class="panel-25553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25553");
const base = ref(25553);
const total = computed(() => base.value * 2);

function incrementar25553() {
  base.value++;
}
</script>
