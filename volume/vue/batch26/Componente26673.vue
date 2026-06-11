<template>
  <section class="panel-26673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26673");
const base = ref(26673);
const total = computed(() => base.value * 2);

function incrementar26673() {
  base.value++;
}
</script>
