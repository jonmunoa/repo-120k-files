<template>
  <section class="panel-8013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8013");
const base = ref(8013);
const total = computed(() => base.value * 2);

function incrementar8013() {
  base.value++;
}
</script>
