<template>
  <section class="panel-5013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5013");
const base = ref(5013);
const total = computed(() => base.value * 2);

function incrementar5013() {
  base.value++;
}
</script>
