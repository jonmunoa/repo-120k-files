<template>
  <section class="panel-53013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53013");
const base = ref(53013);
const total = computed(() => base.value * 2);

function incrementar53013() {
  base.value++;
}
</script>
