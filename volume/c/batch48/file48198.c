// fichero 48198 -- macros y constantes -- MODIFICADO
#define LIMITE_48198 48398
#define FACTOR_48198 5

int aplicar_limite48198(int valor) {
    if (valor > LIMITE_48198) return LIMITE_48198;
    return valor * FACTOR_48198;
}
