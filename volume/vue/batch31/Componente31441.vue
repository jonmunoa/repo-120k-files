<template>
  <section class="panel-31441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31441");
const base = ref(31441);
const total = computed(() => base.value * 2);

function incrementar31441() {
  base.value++;
}
</script>
