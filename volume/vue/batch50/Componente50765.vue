<template>
  <section class="panel-50765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50765");
const base = ref(50765);
const total = computed(() => base.value * 2);

function incrementar50765() {
  base.value++;
}
</script>
