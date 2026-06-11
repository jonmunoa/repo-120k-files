<template>
  <section class="panel-32949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32949");
const base = ref(32949);
const total = computed(() => base.value * 2);

function incrementar32949() {
  base.value++;
}
</script>
