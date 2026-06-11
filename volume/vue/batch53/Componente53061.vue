<template>
  <section class="panel-53061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53061");
const base = ref(53061);
const total = computed(() => base.value * 2);

function incrementar53061() {
  base.value++;
}
</script>
