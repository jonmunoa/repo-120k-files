<template>
  <section class="panel-49121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49121");
const base = ref(49121);
const total = computed(() => base.value * 2);

function incrementar49121() {
  base.value++;
}
</script>
