<template>
  <section class="panel-34457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34457");
const base = ref(34457);
const total = computed(() => base.value * 2);

function incrementar34457() {
  base.value++;
}
</script>
