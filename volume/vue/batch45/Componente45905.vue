<template>
  <section class="panel-45905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45905");
const base = ref(45905);
const total = computed(() => base.value * 2);

function incrementar45905() {
  base.value++;
}
</script>
