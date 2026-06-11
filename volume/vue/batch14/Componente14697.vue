<template>
  <section class="panel-14697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14697");
const base = ref(14697);
const total = computed(() => base.value * 2);

function incrementar14697() {
  base.value++;
}
</script>
