<template>
  <section class="panel-53277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53277");
const base = ref(53277);
const total = computed(() => base.value * 2);

function incrementar53277() {
  base.value++;
}
</script>
