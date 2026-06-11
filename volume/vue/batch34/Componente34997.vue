<template>
  <section class="panel-34997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34997");
const base = ref(34997);
const total = computed(() => base.value * 2);

function incrementar34997() {
  base.value++;
}
</script>
