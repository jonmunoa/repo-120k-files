// fichero 2030 -- macros y constantes -- MODIFICADO
#define LIMITE_2030 2230
#define FACTOR_2030 2

int aplicar_limite2030(int valor) {
    if (valor > LIMITE_2030) return LIMITE_2030;
    return valor * FACTOR_2030;
}
