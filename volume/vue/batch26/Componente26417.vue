<template>
  <section class="panel-26417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26417");
const base = ref(26417);
const total = computed(() => base.value * 2);

function incrementar26417() {
  base.value++;
}
</script>
