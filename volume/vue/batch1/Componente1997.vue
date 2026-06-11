<template>
  <section class="panel-1997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1997");
const base = ref(1997);
const total = computed(() => base.value * 2);

function incrementar1997() {
  base.value++;
}
</script>
