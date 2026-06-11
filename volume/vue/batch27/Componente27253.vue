<template>
  <section class="panel-27253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27253");
const base = ref(27253);
const total = computed(() => base.value * 2);

function incrementar27253() {
  base.value++;
}
</script>
