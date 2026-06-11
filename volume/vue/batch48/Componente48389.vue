<template>
  <section class="panel-48389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48389");
const base = ref(48389);
const total = computed(() => base.value * 2);

function incrementar48389() {
  base.value++;
}
</script>
