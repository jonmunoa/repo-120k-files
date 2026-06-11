<template>
  <section class="panel-53245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53245");
const base = ref(53245);
const total = computed(() => base.value * 2);

function incrementar53245() {
  base.value++;
}
</script>
