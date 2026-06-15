// fichero 8018 -- macros y constantes -- MODIFICADO
#define LIMITE_8018 8218
#define FACTOR_8018 5

int aplicar_limite8018(int valor) {
    if (valor > LIMITE_8018) return LIMITE_8018;
    return valor * FACTOR_8018;
}
