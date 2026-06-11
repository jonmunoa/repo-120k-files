<template>
  <section class="panel-53401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53401");
const base = ref(53401);
const total = computed(() => base.value * 2);

function incrementar53401() {
  base.value++;
}
</script>
