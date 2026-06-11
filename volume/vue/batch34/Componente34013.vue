<template>
  <section class="panel-34013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34013");
const base = ref(34013);
const total = computed(() => base.value * 2);

function incrementar34013() {
  base.value++;
}
</script>
