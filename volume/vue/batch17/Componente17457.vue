<template>
  <section class="panel-17457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17457");
const base = ref(17457);
const total = computed(() => base.value * 2);

function incrementar17457() {
  base.value++;
}
</script>
