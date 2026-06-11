<template>
  <section class="panel-43997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43997");
const base = ref(43997);
const total = computed(() => base.value * 2);

function incrementar43997() {
  base.value++;
}
</script>
