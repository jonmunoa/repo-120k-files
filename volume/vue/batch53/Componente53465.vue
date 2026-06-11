<template>
  <section class="panel-53465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53465");
const base = ref(53465);
const total = computed(() => base.value * 2);

function incrementar53465() {
  base.value++;
}
</script>
