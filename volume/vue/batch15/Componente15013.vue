<template>
  <section class="panel-15013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15013");
const base = ref(15013);
const total = computed(() => base.value * 2);

function incrementar15013() {
  base.value++;
}
</script>
