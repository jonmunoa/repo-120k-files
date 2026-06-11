<template>
  <section class="panel-22157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22157");
const base = ref(22157);
const total = computed(() => base.value * 2);

function incrementar22157() {
  base.value++;
}
</script>
