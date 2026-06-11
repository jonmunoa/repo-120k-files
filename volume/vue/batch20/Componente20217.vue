<template>
  <section class="panel-20217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20217");
const base = ref(20217);
const total = computed(() => base.value * 2);

function incrementar20217() {
  base.value++;
}
</script>
