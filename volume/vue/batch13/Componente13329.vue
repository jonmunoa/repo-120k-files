<template>
  <section class="panel-13329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13329");
const base = ref(13329);
const total = computed(() => base.value * 2);

function incrementar13329() {
  base.value++;
}
</script>
