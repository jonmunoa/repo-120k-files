<template>
  <section class="panel-27077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27077");
const base = ref(27077);
const total = computed(() => base.value * 2);

function incrementar27077() {
  base.value++;
}
</script>
