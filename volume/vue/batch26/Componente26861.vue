<template>
  <section class="panel-26861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26861");
const base = ref(26861);
const total = computed(() => base.value * 2);

function incrementar26861() {
  base.value++;
}
</script>
