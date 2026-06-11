<template>
  <section class="panel-35593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35593");
const base = ref(35593);
const total = computed(() => base.value * 2);

function incrementar35593() {
  base.value++;
}
</script>
