<template>
  <section class="panel-10357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10357");
const base = ref(10357);
const total = computed(() => base.value * 2);

function incrementar10357() {
  base.value++;
}
</script>
