<template>
  <section class="panel-26425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26425");
const base = ref(26425);
const total = computed(() => base.value * 2);

function incrementar26425() {
  base.value++;
}
</script>
