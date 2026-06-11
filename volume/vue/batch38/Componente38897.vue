<template>
  <section class="panel-38897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38897");
const base = ref(38897);
const total = computed(() => base.value * 2);

function incrementar38897() {
  base.value++;
}
</script>
