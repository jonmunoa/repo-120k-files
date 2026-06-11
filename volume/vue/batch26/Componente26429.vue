<template>
  <section class="panel-26429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26429");
const base = ref(26429);
const total = computed(() => base.value * 2);

function incrementar26429() {
  base.value++;
}
</script>
