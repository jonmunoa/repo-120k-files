// fichero 43186 -- macros y constantes -- MODIFICADO
#define LIMITE_43186 43386
#define FACTOR_43186 3

int aplicar_limite43186(int valor) {
    if (valor > LIMITE_43186) return LIMITE_43186;
    return valor * FACTOR_43186;
}
