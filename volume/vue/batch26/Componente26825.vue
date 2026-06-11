<template>
  <section class="panel-26825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26825");
const base = ref(26825);
const total = computed(() => base.value * 2);

function incrementar26825() {
  base.value++;
}
</script>
