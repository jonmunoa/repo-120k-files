<template>
  <section class="panel-49185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49185");
const base = ref(49185);
const total = computed(() => base.value * 2);

function incrementar49185() {
  base.value++;
}
</script>
