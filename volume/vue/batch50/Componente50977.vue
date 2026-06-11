<template>
  <section class="panel-50977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50977");
const base = ref(50977);
const total = computed(() => base.value * 2);

function incrementar50977() {
  base.value++;
}
</script>
