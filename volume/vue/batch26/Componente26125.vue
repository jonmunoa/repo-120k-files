<template>
  <section class="panel-26125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26125");
const base = ref(26125);
const total = computed(() => base.value * 2);

function incrementar26125() {
  base.value++;
}
</script>
