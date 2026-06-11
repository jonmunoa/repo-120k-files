<template>
  <section class="panel-11437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11437");
const base = ref(11437);
const total = computed(() => base.value * 2);

function incrementar11437() {
  base.value++;
}
</script>
