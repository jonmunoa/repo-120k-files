<template>
  <section class="panel-38709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38709");
const base = ref(38709);
const total = computed(() => base.value * 2);

function incrementar38709() {
  base.value++;
}
</script>
