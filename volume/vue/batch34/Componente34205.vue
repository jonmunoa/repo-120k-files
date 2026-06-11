<template>
  <section class="panel-34205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34205");
const base = ref(34205);
const total = computed(() => base.value * 2);

function incrementar34205() {
  base.value++;
}
</script>
