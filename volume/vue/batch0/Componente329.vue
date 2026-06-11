<template>
  <section class="panel-329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 329");
const base = ref(329);
const total = computed(() => base.value * 2);

function incrementar329() {
  base.value++;
}
</script>
