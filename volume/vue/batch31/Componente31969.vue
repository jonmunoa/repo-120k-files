<template>
  <section class="panel-31969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31969");
const base = ref(31969);
const total = computed(() => base.value * 2);

function incrementar31969() {
  base.value++;
}
</script>
