<template>
  <section class="panel-17609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17609");
const base = ref(17609);
const total = computed(() => base.value * 2);

function incrementar17609() {
  base.value++;
}
</script>
