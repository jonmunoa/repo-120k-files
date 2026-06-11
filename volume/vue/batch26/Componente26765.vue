<template>
  <section class="panel-26765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26765");
const base = ref(26765);
const total = computed(() => base.value * 2);

function incrementar26765() {
  base.value++;
}
</script>
