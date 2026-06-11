<template>
  <section class="panel-7561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7561");
const base = ref(7561);
const total = computed(() => base.value * 2);

function incrementar7561() {
  base.value++;
}
</script>
