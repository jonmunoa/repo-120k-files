<template>
  <section class="panel-53321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53321");
const base = ref(53321);
const total = computed(() => base.value * 2);

function incrementar53321() {
  base.value++;
}
</script>
