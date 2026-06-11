<template>
  <section class="panel-35977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35977");
const base = ref(35977);
const total = computed(() => base.value * 2);

function incrementar35977() {
  base.value++;
}
</script>
