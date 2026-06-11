<template>
  <section class="panel-38505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38505");
const base = ref(38505);
const total = computed(() => base.value * 2);

function incrementar38505() {
  base.value++;
}
</script>
