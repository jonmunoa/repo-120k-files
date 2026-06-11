<template>
  <section class="panel-37933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37933");
const base = ref(37933);
const total = computed(() => base.value * 2);

function incrementar37933() {
  base.value++;
}
</script>
