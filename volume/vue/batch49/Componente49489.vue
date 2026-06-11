<template>
  <section class="panel-49489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49489");
const base = ref(49489);
const total = computed(() => base.value * 2);

function incrementar49489() {
  base.value++;
}
</script>
