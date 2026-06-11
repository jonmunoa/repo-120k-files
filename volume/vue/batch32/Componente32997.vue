<template>
  <section class="panel-32997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32997");
const base = ref(32997);
const total = computed(() => base.value * 2);

function incrementar32997() {
  base.value++;
}
</script>
