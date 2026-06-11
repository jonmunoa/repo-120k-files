<template>
  <section class="panel-50253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50253");
const base = ref(50253);
const total = computed(() => base.value * 2);

function incrementar50253() {
  base.value++;
}
</script>
