<template>
  <section class="panel-34737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34737");
const base = ref(34737);
const total = computed(() => base.value * 2);

function incrementar34737() {
  base.value++;
}
</script>
