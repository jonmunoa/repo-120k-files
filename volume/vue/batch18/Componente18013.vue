<template>
  <section class="panel-18013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18013");
const base = ref(18013);
const total = computed(() => base.value * 2);

function incrementar18013() {
  base.value++;
}
</script>
