<template>
  <section class="panel-13125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13125");
const base = ref(13125);
const total = computed(() => base.value * 2);

function incrementar13125() {
  base.value++;
}
</script>
