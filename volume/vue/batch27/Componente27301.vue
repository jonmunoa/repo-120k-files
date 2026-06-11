<template>
  <section class="panel-27301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27301");
const base = ref(27301);
const total = computed(() => base.value * 2);

function incrementar27301() {
  base.value++;
}
</script>
