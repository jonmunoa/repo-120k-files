<template>
  <section class="panel-52933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52933");
const base = ref(52933);
const total = computed(() => base.value * 2);

function incrementar52933() {
  base.value++;
}
</script>
