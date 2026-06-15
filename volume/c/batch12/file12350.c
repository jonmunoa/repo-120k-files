// fichero 12350 -- macros y constantes -- MODIFICADO
#define LIMITE_12350 12550
#define FACTOR_12350 2

int aplicar_limite12350(int valor) {
    if (valor > LIMITE_12350) return LIMITE_12350;
    return valor * FACTOR_12350;
}
