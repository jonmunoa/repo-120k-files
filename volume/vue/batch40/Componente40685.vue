<template>
  <section class="panel-40685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40685");
const base = ref(40685);
const total = computed(() => base.value * 2);

function incrementar40685() {
  base.value++;
}
</script>
