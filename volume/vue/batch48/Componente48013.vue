<template>
  <section class="panel-48013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48013");
const base = ref(48013);
const total = computed(() => base.value * 2);

function incrementar48013() {
  base.value++;
}
</script>
