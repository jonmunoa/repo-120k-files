<template>
  <section class="panel-53945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53945");
const base = ref(53945);
const total = computed(() => base.value * 2);

function incrementar53945() {
  base.value++;
}
</script>
