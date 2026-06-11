<template>
  <section class="panel-14897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14897");
const base = ref(14897);
const total = computed(() => base.value * 2);

function incrementar14897() {
  base.value++;
}
</script>
