<template>
  <section class="panel-27737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27737");
const base = ref(27737);
const total = computed(() => base.value * 2);

function incrementar27737() {
  base.value++;
}
</script>
