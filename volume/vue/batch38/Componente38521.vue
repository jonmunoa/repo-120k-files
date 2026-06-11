<template>
  <section class="panel-38521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38521");
const base = ref(38521);
const total = computed(() => base.value * 2);

function incrementar38521() {
  base.value++;
}
</script>
