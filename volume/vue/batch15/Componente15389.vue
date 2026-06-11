<template>
  <section class="panel-15389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15389");
const base = ref(15389);
const total = computed(() => base.value * 2);

function incrementar15389() {
  base.value++;
}
</script>
