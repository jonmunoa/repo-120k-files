<template>
  <section class="panel-50441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50441");
const base = ref(50441);
const total = computed(() => base.value * 2);

function incrementar50441() {
  base.value++;
}
</script>
