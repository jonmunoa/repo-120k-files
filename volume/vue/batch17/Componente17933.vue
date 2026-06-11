<template>
  <section class="panel-17933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17933");
const base = ref(17933);
const total = computed(() => base.value * 2);

function incrementar17933() {
  base.value++;
}
</script>
