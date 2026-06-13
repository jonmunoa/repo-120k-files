// fichero 48198 -- macros y constantes
#define LIMITE_48198 48298
#define FACTOR_48198 4

int aplicar_limite48198(int valor) {
    if (valor > LIMITE_48198) return LIMITE_48198;
    return valor * FACTOR_48198;
}
