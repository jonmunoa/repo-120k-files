<template>
  <section class="panel-53673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53673");
const base = ref(53673);
const total = computed(() => base.value * 2);

function incrementar53673() {
  base.value++;
}
</script>
