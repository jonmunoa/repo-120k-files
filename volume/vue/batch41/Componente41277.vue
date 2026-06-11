<template>
  <section class="panel-41277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41277");
const base = ref(41277);
const total = computed(() => base.value * 2);

function incrementar41277() {
  base.value++;
}
</script>
