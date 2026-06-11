<template>
  <section class="panel-933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 933");
const base = ref(933);
const total = computed(() => base.value * 2);

function incrementar933() {
  base.value++;
}
</script>
