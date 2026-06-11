<template>
  <section class="panel-55341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55341");
const base = ref(55341);
const total = computed(() => base.value * 2);

function incrementar55341() {
  base.value++;
}
</script>
