<template>
  <section class="panel-51609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51609");
const base = ref(51609);
const total = computed(() => base.value * 2);

function incrementar51609() {
  base.value++;
}
</script>
