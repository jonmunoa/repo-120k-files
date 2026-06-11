<template>
  <section class="panel-26557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26557");
const base = ref(26557);
const total = computed(() => base.value * 2);

function incrementar26557() {
  base.value++;
}
</script>
