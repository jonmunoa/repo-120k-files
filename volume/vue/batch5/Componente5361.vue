<template>
  <section class="panel-5361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5361");
const base = ref(5361);
const total = computed(() => base.value * 2);

function incrementar5361() {
  base.value++;
}
</script>
