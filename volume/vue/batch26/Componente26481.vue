<template>
  <section class="panel-26481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26481");
const base = ref(26481);
const total = computed(() => base.value * 2);

function incrementar26481() {
  base.value++;
}
</script>
