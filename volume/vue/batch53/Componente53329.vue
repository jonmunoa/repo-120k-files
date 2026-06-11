<template>
  <section class="panel-53329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53329");
const base = ref(53329);
const total = computed(() => base.value * 2);

function incrementar53329() {
  base.value++;
}
</script>
