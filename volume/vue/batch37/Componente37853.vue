<template>
  <section class="panel-37853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37853");
const base = ref(37853);
const total = computed(() => base.value * 2);

function incrementar37853() {
  base.value++;
}
</script>
