<template>
  <section class="panel-53997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53997");
const base = ref(53997);
const total = computed(() => base.value * 2);

function incrementar53997() {
  base.value++;
}
</script>
