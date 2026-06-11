<template>
  <section class="panel-35621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35621");
const base = ref(35621);
const total = computed(() => base.value * 2);

function incrementar35621() {
  base.value++;
}
</script>
