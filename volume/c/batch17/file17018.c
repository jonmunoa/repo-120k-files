// fichero 17018 -- macros y constantes -- MODIFICADO
#define LIMITE_17018 17218
#define FACTOR_17018 5

int aplicar_limite17018(int valor) {
    if (valor > LIMITE_17018) return LIMITE_17018;
    return valor * FACTOR_17018;
}
