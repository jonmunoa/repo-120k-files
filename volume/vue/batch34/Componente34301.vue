<template>
  <section class="panel-34301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34301");
const base = ref(34301);
const total = computed(() => base.value * 2);

function incrementar34301() {
  base.value++;
}
</script>
