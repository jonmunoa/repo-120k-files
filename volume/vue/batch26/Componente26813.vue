<template>
  <section class="panel-26813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26813");
const base = ref(26813);
const total = computed(() => base.value * 2);

function incrementar26813() {
  base.value++;
}
</script>
