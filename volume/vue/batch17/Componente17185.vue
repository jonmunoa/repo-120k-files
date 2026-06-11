<template>
  <section class="panel-17185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17185");
const base = ref(17185);
const total = computed(() => base.value * 2);

function incrementar17185() {
  base.value++;
}
</script>
