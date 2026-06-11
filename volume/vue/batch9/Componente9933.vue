<template>
  <section class="panel-9933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9933");
const base = ref(9933);
const total = computed(() => base.value * 2);

function incrementar9933() {
  base.value++;
}
</script>
