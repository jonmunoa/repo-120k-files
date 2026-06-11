<template>
  <section class="panel-16997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16997");
const base = ref(16997);
const total = computed(() => base.value * 2);

function incrementar16997() {
  base.value++;
}
</script>
