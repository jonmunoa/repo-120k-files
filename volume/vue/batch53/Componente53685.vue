<template>
  <section class="panel-53685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53685");
const base = ref(53685);
const total = computed(() => base.value * 2);

function incrementar53685() {
  base.value++;
}
</script>
