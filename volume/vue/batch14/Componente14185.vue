<template>
  <section class="panel-14185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14185");
const base = ref(14185);
const total = computed(() => base.value * 2);

function incrementar14185() {
  base.value++;
}
</script>
