<template>
  <section class="panel-27997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27997");
const base = ref(27997);
const total = computed(() => base.value * 2);

function incrementar27997() {
  base.value++;
}
</script>
