<template>
  <section class="panel-4897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4897");
const base = ref(4897);
const total = computed(() => base.value * 2);

function incrementar4897() {
  base.value++;
}
</script>
