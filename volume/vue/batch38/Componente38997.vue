<template>
  <section class="panel-38997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38997");
const base = ref(38997);
const total = computed(() => base.value * 2);

function incrementar38997() {
  base.value++;
}
</script>
