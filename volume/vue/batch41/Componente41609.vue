<template>
  <section class="panel-41609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41609");
const base = ref(41609);
const total = computed(() => base.value * 2);

function incrementar41609() {
  base.value++;
}
</script>
