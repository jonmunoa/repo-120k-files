<template>
  <section class="panel-26809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26809");
const base = ref(26809);
const total = computed(() => base.value * 2);

function incrementar26809() {
  base.value++;
}
</script>
