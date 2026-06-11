<template>
  <section class="panel-26225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26225");
const base = ref(26225);
const total = computed(() => base.value * 2);

function incrementar26225() {
  base.value++;
}
</script>
