<template>
  <section class="panel-40897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40897");
const base = ref(40897);
const total = computed(() => base.value * 2);

function incrementar40897() {
  base.value++;
}
</script>
