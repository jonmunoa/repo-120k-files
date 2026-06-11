<template>
  <section class="panel-26693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26693");
const base = ref(26693);
const total = computed(() => base.value * 2);

function incrementar26693() {
  base.value++;
}
</script>
