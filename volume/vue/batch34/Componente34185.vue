<template>
  <section class="panel-34185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34185");
const base = ref(34185);
const total = computed(() => base.value * 2);

function incrementar34185() {
  base.value++;
}
</script>
