<template>
  <section class="panel-38465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38465");
const base = ref(38465);
const total = computed(() => base.value * 2);

function incrementar38465() {
  base.value++;
}
</script>
