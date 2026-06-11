<template>
  <section class="panel-35509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35509");
const base = ref(35509);
const total = computed(() => base.value * 2);

function incrementar35509() {
  base.value++;
}
</script>
