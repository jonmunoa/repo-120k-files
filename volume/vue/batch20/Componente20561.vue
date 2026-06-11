<template>
  <section class="panel-20561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20561");
const base = ref(20561);
const total = computed(() => base.value * 2);

function incrementar20561() {
  base.value++;
}
</script>
