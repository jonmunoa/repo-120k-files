<template>
  <section class="panel-9225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9225");
const base = ref(9225);
const total = computed(() => base.value * 2);

function incrementar9225() {
  base.value++;
}
</script>
