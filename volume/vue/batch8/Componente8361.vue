<template>
  <section class="panel-8361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8361");
const base = ref(8361);
const total = computed(() => base.value * 2);

function incrementar8361() {
  base.value++;
}
</script>
