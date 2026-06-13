// fichero 33310 -- macros y constantes
#define LIMITE_33310 33410
#define FACTOR_33310 1

int aplicar_limite33310(int valor) {
    if (valor > LIMITE_33310) return LIMITE_33310;
    return valor * FACTOR_33310;
}
