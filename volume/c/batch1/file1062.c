// fichero 1062 -- macros y constantes -- MODIFICADO
#define LIMITE_1062 1262
#define FACTOR_1062 4

int aplicar_limite1062(int valor) {
    if (valor > LIMITE_1062) return LIMITE_1062;
    return valor * FACTOR_1062;
}
