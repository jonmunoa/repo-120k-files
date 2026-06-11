<template>
  <section class="panel-20709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20709");
const base = ref(20709);
const total = computed(() => base.value * 2);

function incrementar20709() {
  base.value++;
}
</script>
