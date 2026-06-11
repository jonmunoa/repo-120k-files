<template>
  <section class="panel-49997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49997");
const base = ref(49997);
const total = computed(() => base.value * 2);

function incrementar49997() {
  base.value++;
}
</script>
