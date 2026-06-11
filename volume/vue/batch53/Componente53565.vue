<template>
  <section class="panel-53565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53565");
const base = ref(53565);
const total = computed(() => base.value * 2);

function incrementar53565() {
  base.value++;
}
</script>
