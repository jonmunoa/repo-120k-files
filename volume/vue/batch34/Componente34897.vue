<template>
  <section class="panel-34897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34897");
const base = ref(34897);
const total = computed(() => base.value * 2);

function incrementar34897() {
  base.value++;
}
</script>
