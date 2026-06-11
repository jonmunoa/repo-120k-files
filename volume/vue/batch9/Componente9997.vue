<template>
  <section class="panel-9997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9997");
const base = ref(9997);
const total = computed(() => base.value * 2);

function incrementar9997() {
  base.value++;
}
</script>
