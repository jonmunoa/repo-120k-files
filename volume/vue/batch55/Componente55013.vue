<template>
  <section class="panel-55013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55013");
const base = ref(55013);
const total = computed(() => base.value * 2);

function incrementar55013() {
  base.value++;
}
</script>
