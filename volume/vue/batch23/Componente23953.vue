<template>
  <section class="panel-23953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23953");
const base = ref(23953);
const total = computed(() => base.value * 2);

function incrementar23953() {
  base.value++;
}
</script>
