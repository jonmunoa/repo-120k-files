<template>
  <section class="panel-609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 609");
const base = ref(609);
const total = computed(() => base.value * 2);

function incrementar609() {
  base.value++;
}
</script>
