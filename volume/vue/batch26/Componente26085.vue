<template>
  <section class="panel-26085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26085");
const base = ref(26085);
const total = computed(() => base.value * 2);

function incrementar26085() {
  base.value++;
}
</script>
