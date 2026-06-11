<template>
  <section class="panel-26781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26781");
const base = ref(26781);
const total = computed(() => base.value * 2);

function incrementar26781() {
  base.value++;
}
</script>
