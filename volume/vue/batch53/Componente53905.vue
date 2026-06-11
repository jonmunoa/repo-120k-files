<template>
  <section class="panel-53905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53905");
const base = ref(53905);
const total = computed(() => base.value * 2);

function incrementar53905() {
  base.value++;
}
</script>
