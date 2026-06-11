<template>
  <section class="panel-53485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53485");
const base = ref(53485);
const total = computed(() => base.value * 2);

function incrementar53485() {
  base.value++;
}
</script>
