<template>
  <section class="panel-26313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26313");
const base = ref(26313);
const total = computed(() => base.value * 2);

function incrementar26313() {
  base.value++;
}
</script>
