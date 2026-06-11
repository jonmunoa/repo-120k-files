<template>
  <section class="panel-26997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26997");
const base = ref(26997);
const total = computed(() => base.value * 2);

function incrementar26997() {
  base.value++;
}
</script>
