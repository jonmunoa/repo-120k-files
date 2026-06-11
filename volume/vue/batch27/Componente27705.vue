<template>
  <section class="panel-27705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27705");
const base = ref(27705);
const total = computed(() => base.value * 2);

function incrementar27705() {
  base.value++;
}
</script>
