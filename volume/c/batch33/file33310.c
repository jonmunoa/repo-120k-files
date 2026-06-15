// fichero 33310 -- macros y constantes -- MODIFICADO
#define LIMITE_33310 33510
#define FACTOR_33310 2

int aplicar_limite33310(int valor) {
    if (valor > LIMITE_33310) return LIMITE_33310;
    return valor * FACTOR_33310;
}
