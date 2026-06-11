<template>
  <section class="panel-11565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11565");
const base = ref(11565);
const total = computed(() => base.value * 2);

function incrementar11565() {
  base.value++;
}
</script>
