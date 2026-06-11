<template>
  <section class="panel-51493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51493");
const base = ref(51493);
const total = computed(() => base.value * 2);

function incrementar51493() {
  base.value++;
}
</script>
