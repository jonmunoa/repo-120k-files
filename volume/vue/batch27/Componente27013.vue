<template>
  <section class="panel-27013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27013");
const base = ref(27013);
const total = computed(() => base.value * 2);

function incrementar27013() {
  base.value++;
}
</script>
