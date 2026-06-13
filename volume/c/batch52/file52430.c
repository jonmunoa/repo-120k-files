// fichero 52430 -- macros y constantes
#define LIMITE_52430 52530
#define FACTOR_52430 1

int aplicar_limite52430(int valor) {
    if (valor > LIMITE_52430) return LIMITE_52430;
    return valor * FACTOR_52430;
}
