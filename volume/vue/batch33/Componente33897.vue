<template>
  <section class="panel-33897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33897");
const base = ref(33897);
const total = computed(() => base.value * 2);

function incrementar33897() {
  base.value++;
}
</script>
