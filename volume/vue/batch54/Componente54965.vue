<template>
  <section class="panel-54965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54965");
const base = ref(54965);
const total = computed(() => base.value * 2);

function incrementar54965() {
  base.value++;
}
</script>
