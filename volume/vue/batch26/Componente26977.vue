<template>
  <section class="panel-26977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26977");
const base = ref(26977);
const total = computed(() => base.value * 2);

function incrementar26977() {
  base.value++;
}
</script>
