<template>
  <section class="panel-53789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53789");
const base = ref(53789);
const total = computed(() => base.value * 2);

function incrementar53789() {
  base.value++;
}
</script>
