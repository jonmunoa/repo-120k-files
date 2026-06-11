<template>
  <section class="panel-24013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24013");
const base = ref(24013);
const total = computed(() => base.value * 2);

function incrementar24013() {
  base.value++;
}
</script>
