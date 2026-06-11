<template>
  <section class="panel-37225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37225");
const base = ref(37225);
const total = computed(() => base.value * 2);

function incrementar37225() {
  base.value++;
}
</script>
