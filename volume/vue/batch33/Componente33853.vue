<template>
  <section class="panel-33853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33853");
const base = ref(33853);
const total = computed(() => base.value * 2);

function incrementar33853() {
  base.value++;
}
</script>
