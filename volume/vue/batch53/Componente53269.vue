<template>
  <section class="panel-53269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53269");
const base = ref(53269);
const total = computed(() => base.value * 2);

function incrementar53269() {
  base.value++;
}
</script>
