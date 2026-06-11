<template>
  <section class="panel-4013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4013");
const base = ref(4013);
const total = computed(() => base.value * 2);

function incrementar4013() {
  base.value++;
}
</script>
