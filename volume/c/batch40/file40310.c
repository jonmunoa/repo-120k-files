// fichero 40310 -- macros y constantes -- MODIFICADO
#define LIMITE_40310 40510
#define FACTOR_40310 2

int aplicar_limite40310(int valor) {
    if (valor > LIMITE_40310) return LIMITE_40310;
    return valor * FACTOR_40310;
}
