<template>
  <section class="panel-51185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51185");
const base = ref(51185);
const total = computed(() => base.value * 2);

function incrementar51185() {
  base.value++;
}
</script>
