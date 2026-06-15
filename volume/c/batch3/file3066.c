// fichero 3066 -- macros y constantes -- MODIFICADO
#define LIMITE_3066 3266
#define FACTOR_3066 3

int aplicar_limite3066(int valor) {
    if (valor > LIMITE_3066) return LIMITE_3066;
    return valor * FACTOR_3066;
}
