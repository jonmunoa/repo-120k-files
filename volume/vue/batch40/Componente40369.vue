<template>
  <section class="panel-40369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40369");
const base = ref(40369);
const total = computed(() => base.value * 2);

function incrementar40369() {
  base.value++;
}
</script>
