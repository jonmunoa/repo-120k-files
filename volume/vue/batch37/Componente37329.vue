<template>
  <section class="panel-37329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37329");
const base = ref(37329);
const total = computed(() => base.value * 2);

function incrementar37329() {
  base.value++;
}
</script>
