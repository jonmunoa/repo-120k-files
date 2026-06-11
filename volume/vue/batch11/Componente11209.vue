<template>
  <section class="panel-11209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11209");
const base = ref(11209);
const total = computed(() => base.value * 2);

function incrementar11209() {
  base.value++;
}
</script>
