<template>
  <section class="panel-55261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55261");
const base = ref(55261);
const total = computed(() => base.value * 2);

function incrementar55261() {
  base.value++;
}
</script>
