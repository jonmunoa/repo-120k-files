<template>
  <section class="panel-4393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4393");
const base = ref(4393);
const total = computed(() => base.value * 2);

function incrementar4393() {
  base.value++;
}
</script>
