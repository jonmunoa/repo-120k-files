<template>
  <section class="panel-27209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27209");
const base = ref(27209);
const total = computed(() => base.value * 2);

function incrementar27209() {
  base.value++;
}
</script>
