<template>
  <section class="panel-19277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19277");
const base = ref(19277);
const total = computed(() => base.value * 2);

function incrementar19277() {
  base.value++;
}
</script>
