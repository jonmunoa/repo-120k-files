<template>
  <section class="panel-38481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38481");
const base = ref(38481);
const total = computed(() => base.value * 2);

function incrementar38481() {
  base.value++;
}
</script>
