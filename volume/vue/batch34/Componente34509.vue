<template>
  <section class="panel-34509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34509");
const base = ref(34509);
const total = computed(() => base.value * 2);

function incrementar34509() {
  base.value++;
}
</script>
