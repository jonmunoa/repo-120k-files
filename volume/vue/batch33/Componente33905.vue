<template>
  <section class="panel-33905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33905");
const base = ref(33905);
const total = computed(() => base.value * 2);

function incrementar33905() {
  base.value++;
}
</script>
