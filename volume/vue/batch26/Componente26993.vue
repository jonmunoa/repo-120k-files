<template>
  <section class="panel-26993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26993");
const base = ref(26993);
const total = computed(() => base.value * 2);

function incrementar26993() {
  base.value++;
}
</script>
