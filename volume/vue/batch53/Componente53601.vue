<template>
  <section class="panel-53601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53601");
const base = ref(53601);
const total = computed(() => base.value * 2);

function incrementar53601() {
  base.value++;
}
</script>
