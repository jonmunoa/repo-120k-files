// fichero 198 -- macros y constantes -- MODIFICADO
#define LIMITE_198 398
#define FACTOR_198 5

int aplicar_limite198(int valor) {
    if (valor > LIMITE_198) return LIMITE_198;
    return valor * FACTOR_198;
}
