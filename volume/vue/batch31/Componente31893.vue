<template>
  <section class="panel-31893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31893");
const base = ref(31893);
const total = computed(() => base.value * 2);

function incrementar31893() {
  base.value++;
}
</script>
