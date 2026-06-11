<template>
  <section class="panel-18457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18457");
const base = ref(18457);
const total = computed(() => base.value * 2);

function incrementar18457() {
  base.value++;
}
</script>
