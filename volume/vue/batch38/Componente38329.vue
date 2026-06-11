<template>
  <section class="panel-38329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38329");
const base = ref(38329);
const total = computed(() => base.value * 2);

function incrementar38329() {
  base.value++;
}
</script>
