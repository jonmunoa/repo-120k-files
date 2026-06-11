<template>
  <section class="panel-35053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35053");
const base = ref(35053);
const total = computed(() => base.value * 2);

function incrementar35053() {
  base.value++;
}
</script>
