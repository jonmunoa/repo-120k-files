// fichero 14198 -- macros y constantes
#define LIMITE_14198 14298
#define FACTOR_14198 4

int aplicar_limite14198(int valor) {
    if (valor > LIMITE_14198) return LIMITE_14198;
    return valor * FACTOR_14198;
}
