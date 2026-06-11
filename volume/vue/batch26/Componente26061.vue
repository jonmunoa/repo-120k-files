<template>
  <section class="panel-26061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26061");
const base = ref(26061);
const total = computed(() => base.value * 2);

function incrementar26061() {
  base.value++;
}
</script>
