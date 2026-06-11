<template>
  <section class="panel-49401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49401");
const base = ref(49401);
const total = computed(() => base.value * 2);

function incrementar49401() {
  base.value++;
}
</script>
