<template>
  <section class="panel-26369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26369");
const base = ref(26369);
const total = computed(() => base.value * 2);

function incrementar26369() {
  base.value++;
}
</script>
