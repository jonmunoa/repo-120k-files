<template>
  <section class="panel-19609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19609");
const base = ref(19609);
const total = computed(() => base.value * 2);

function incrementar19609() {
  base.value++;
}
</script>
