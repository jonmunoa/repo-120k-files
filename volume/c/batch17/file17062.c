// fichero 17062 -- macros y constantes -- MODIFICADO
#define LIMITE_17062 17262
#define FACTOR_17062 4

int aplicar_limite17062(int valor) {
    if (valor > LIMITE_17062) return LIMITE_17062;
    return valor * FACTOR_17062;
}
