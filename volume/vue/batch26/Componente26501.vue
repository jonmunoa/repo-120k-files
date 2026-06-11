<template>
  <section class="panel-26501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26501");
const base = ref(26501);
const total = computed(() => base.value * 2);

function incrementar26501() {
  base.value++;
}
</script>
