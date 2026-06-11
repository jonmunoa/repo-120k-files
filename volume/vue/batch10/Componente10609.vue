<template>
  <section class="panel-10609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10609");
const base = ref(10609);
const total = computed(() => base.value * 2);

function incrementar10609() {
  base.value++;
}
</script>
