<template>
  <section class="panel-33561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33561");
const base = ref(33561);
const total = computed(() => base.value * 2);

function incrementar33561() {
  base.value++;
}
</script>
