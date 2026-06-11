<template>
  <section class="panel-53253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53253");
const base = ref(53253);
const total = computed(() => base.value * 2);

function incrementar53253() {
  base.value++;
}
</script>
