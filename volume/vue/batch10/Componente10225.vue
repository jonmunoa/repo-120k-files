<template>
  <section class="panel-10225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10225");
const base = ref(10225);
const total = computed(() => base.value * 2);

function incrementar10225() {
  base.value++;
}
</script>
