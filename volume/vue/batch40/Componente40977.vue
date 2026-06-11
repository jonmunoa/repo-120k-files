<template>
  <section class="panel-40977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40977");
const base = ref(40977);
const total = computed(() => base.value * 2);

function incrementar40977() {
  base.value++;
}
</script>
