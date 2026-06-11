<template>
  <section class="panel-26681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26681");
const base = ref(26681);
const total = computed(() => base.value * 2);

function incrementar26681() {
  base.value++;
}
</script>
