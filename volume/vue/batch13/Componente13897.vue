<template>
  <section class="panel-13897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13897");
const base = ref(13897);
const total = computed(() => base.value * 2);

function incrementar13897() {
  base.value++;
}
</script>
