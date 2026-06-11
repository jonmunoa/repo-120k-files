<template>
  <section class="panel-26477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26477");
const base = ref(26477);
const total = computed(() => base.value * 2);

function incrementar26477() {
  base.value++;
}
</script>
