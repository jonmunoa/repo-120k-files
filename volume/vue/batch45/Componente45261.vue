<template>
  <section class="panel-45261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45261");
const base = ref(45261);
const total = computed(() => base.value * 2);

function incrementar45261() {
  base.value++;
}
</script>
