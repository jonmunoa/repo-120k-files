<template>
  <section class="panel-41389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41389");
const base = ref(41389);
const total = computed(() => base.value * 2);

function incrementar41389() {
  base.value++;
}
</script>
