<template>
  <section class="panel-26101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26101");
const base = ref(26101);
const total = computed(() => base.value * 2);

function incrementar26101() {
  base.value++;
}
</script>
