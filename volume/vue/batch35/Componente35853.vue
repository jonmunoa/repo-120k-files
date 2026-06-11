<template>
  <section class="panel-35853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35853");
const base = ref(35853);
const total = computed(() => base.value * 2);

function incrementar35853() {
  base.value++;
}
</script>
