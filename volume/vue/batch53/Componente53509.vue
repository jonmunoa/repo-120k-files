<template>
  <section class="panel-53509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53509");
const base = ref(53509);
const total = computed(() => base.value * 2);

function incrementar53509() {
  base.value++;
}
</script>
