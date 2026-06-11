<template>
  <section class="panel-17701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17701");
const base = ref(17701);
const total = computed(() => base.value * 2);

function incrementar17701() {
  base.value++;
}
</script>
