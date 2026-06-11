<template>
  <section class="panel-30185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30185");
const base = ref(30185);
const total = computed(() => base.value * 2);

function incrementar30185() {
  base.value++;
}
</script>
