<template>
  <section class="panel-32097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32097");
const base = ref(32097);
const total = computed(() => base.value * 2);

function incrementar32097() {
  base.value++;
}
</script>
