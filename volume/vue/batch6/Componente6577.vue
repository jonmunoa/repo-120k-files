<template>
  <section class="panel-6577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6577");
const base = ref(6577);
const total = computed(() => base.value * 2);

function incrementar6577() {
  base.value++;
}
</script>
