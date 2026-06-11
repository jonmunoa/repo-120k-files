<template>
  <section class="panel-56361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56361");
const base = ref(56361);
const total = computed(() => base.value * 2);

function incrementar56361() {
  base.value++;
}
</script>
