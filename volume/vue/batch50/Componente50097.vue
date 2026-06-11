<template>
  <section class="panel-50097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50097");
const base = ref(50097);
const total = computed(() => base.value * 2);

function incrementar50097() {
  base.value++;
}
</script>
