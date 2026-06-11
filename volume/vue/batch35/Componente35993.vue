<template>
  <section class="panel-35993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35993");
const base = ref(35993);
const total = computed(() => base.value * 2);

function incrementar35993() {
  base.value++;
}
</script>
