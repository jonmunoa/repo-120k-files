<template>
  <section class="panel-4905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4905");
const base = ref(4905);
const total = computed(() => base.value * 2);

function incrementar4905() {
  base.value++;
}
</script>
