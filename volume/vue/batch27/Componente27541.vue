<template>
  <section class="panel-27541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27541");
const base = ref(27541);
const total = computed(() => base.value * 2);

function incrementar27541() {
  base.value++;
}
</script>
