// fichero 48310 -- macros y constantes -- MODIFICADO
#define LIMITE_48310 48510
#define FACTOR_48310 2

int aplicar_limite48310(int valor) {
    if (valor > LIMITE_48310) return LIMITE_48310;
    return valor * FACTOR_48310;
}
