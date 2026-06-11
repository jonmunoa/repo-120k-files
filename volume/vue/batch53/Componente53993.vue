<template>
  <section class="panel-53993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53993");
const base = ref(53993);
const total = computed(() => base.value * 2);

function incrementar53993() {
  base.value++;
}
</script>
