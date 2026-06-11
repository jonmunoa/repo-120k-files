<template>
  <section class="panel-52277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52277");
const base = ref(52277);
const total = computed(() => base.value * 2);

function incrementar52277() {
  base.value++;
}
</script>
