<template>
  <section class="panel-7945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7945");
const base = ref(7945);
const total = computed(() => base.value * 2);

function incrementar7945() {
  base.value++;
}
</script>
