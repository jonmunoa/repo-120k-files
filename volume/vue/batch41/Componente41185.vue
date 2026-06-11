<template>
  <section class="panel-41185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41185");
const base = ref(41185);
const total = computed(() => base.value * 2);

function incrementar41185() {
  base.value++;
}
</script>
