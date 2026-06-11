<template>
  <section class="panel-35681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35681");
const base = ref(35681);
const total = computed(() => base.value * 2);

function incrementar35681() {
  base.value++;
}
</script>
