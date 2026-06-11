<template>
  <section class="panel-7173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7173");
const base = ref(7173);
const total = computed(() => base.value * 2);

function incrementar7173() {
  base.value++;
}
</script>
