<template>
  <section class="panel-51933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51933");
const base = ref(51933);
const total = computed(() => base.value * 2);

function incrementar51933() {
  base.value++;
}
</script>
