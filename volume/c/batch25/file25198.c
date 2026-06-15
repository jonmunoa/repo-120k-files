// fichero 25198 -- macros y constantes -- MODIFICADO
#define LIMITE_25198 25398
#define FACTOR_25198 5

int aplicar_limite25198(int valor) {
    if (valor > LIMITE_25198) return LIMITE_25198;
    return valor * FACTOR_25198;
}
