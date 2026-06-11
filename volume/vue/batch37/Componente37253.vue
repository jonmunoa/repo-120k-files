<template>
  <section class="panel-37253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37253");
const base = ref(37253);
const total = computed(() => base.value * 2);

function incrementar37253() {
  base.value++;
}
</script>
