<template>
  <section class="panel-52509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52509");
const base = ref(52509);
const total = computed(() => base.value * 2);

function incrementar52509() {
  base.value++;
}
</script>
