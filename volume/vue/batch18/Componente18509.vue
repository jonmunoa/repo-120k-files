<template>
  <section class="panel-18509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18509");
const base = ref(18509);
const total = computed(() => base.value * 2);

function incrementar18509() {
  base.value++;
}
</script>
