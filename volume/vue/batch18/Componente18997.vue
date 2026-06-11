<template>
  <section class="panel-18997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18997");
const base = ref(18997);
const total = computed(() => base.value * 2);

function incrementar18997() {
  base.value++;
}
</script>
