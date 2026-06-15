// fichero 47970 -- macros y constantes -- MODIFICADO
#define LIMITE_47970 48170
#define FACTOR_47970 2

int aplicar_limite47970(int valor) {
    if (valor > LIMITE_47970) return LIMITE_47970;
    return valor * FACTOR_47970;
}
