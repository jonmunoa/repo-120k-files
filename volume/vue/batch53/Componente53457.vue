<template>
  <section class="panel-53457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53457");
const base = ref(53457);
const total = computed(() => base.value * 2);

function incrementar53457() {
  base.value++;
}
</script>
