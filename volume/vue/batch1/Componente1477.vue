<template>
  <section class="panel-1477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1477");
const base = ref(1477);
const total = computed(() => base.value * 2);

function incrementar1477() {
  base.value++;
}
</script>
