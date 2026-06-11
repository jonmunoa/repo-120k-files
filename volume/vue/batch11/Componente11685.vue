<template>
  <section class="panel-11685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11685");
const base = ref(11685);
const total = computed(() => base.value * 2);

function incrementar11685() {
  base.value++;
}
</script>
