<template>
  <section class="panel-40013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40013");
const base = ref(40013);
const total = computed(() => base.value * 2);

function incrementar40013() {
  base.value++;
}
</script>
