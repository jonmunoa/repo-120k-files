<template>
  <section class="panel-34945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34945");
const base = ref(34945);
const total = computed(() => base.value * 2);

function incrementar34945() {
  base.value++;
}
</script>
