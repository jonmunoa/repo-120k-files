<template>
  <section class="panel-53489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53489");
const base = ref(53489);
const total = computed(() => base.value * 2);

function incrementar53489() {
  base.value++;
}
</script>
