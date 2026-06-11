<template>
  <section class="panel-18253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18253");
const base = ref(18253);
const total = computed(() => base.value * 2);

function incrementar18253() {
  base.value++;
}
</script>
