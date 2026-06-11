<template>
  <section class="panel-21013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21013");
const base = ref(21013);
const total = computed(() => base.value * 2);

function incrementar21013() {
  base.value++;
}
</script>
