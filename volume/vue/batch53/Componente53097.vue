<template>
  <section class="panel-53097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53097");
const base = ref(53097);
const total = computed(() => base.value * 2);

function incrementar53097() {
  base.value++;
}
</script>
