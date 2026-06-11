<template>
  <section class="panel-27897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27897");
const base = ref(27897);
const total = computed(() => base.value * 2);

function incrementar27897() {
  base.value++;
}
</script>
