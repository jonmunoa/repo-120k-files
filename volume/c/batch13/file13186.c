// fichero 13186 -- macros y constantes -- MODIFICADO
#define LIMITE_13186 13386
#define FACTOR_13186 3

int aplicar_limite13186(int valor) {
    if (valor > LIMITE_13186) return LIMITE_13186;
    return valor * FACTOR_13186;
}
