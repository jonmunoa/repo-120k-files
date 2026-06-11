<template>
  <section class="panel-26013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26013");
const base = ref(26013);
const total = computed(() => base.value * 2);

function incrementar26013() {
  base.value++;
}
</script>
