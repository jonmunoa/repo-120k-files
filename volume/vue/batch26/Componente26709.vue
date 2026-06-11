<template>
  <section class="panel-26709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26709");
const base = ref(26709);
const total = computed(() => base.value * 2);

function incrementar26709() {
  base.value++;
}
</script>
