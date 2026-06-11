<template>
  <section class="panel-2173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2173");
const base = ref(2173);
const total = computed(() => base.value * 2);

function incrementar2173() {
  base.value++;
}
</script>
