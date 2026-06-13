// fichero 48430 -- macros y constantes
#define LIMITE_48430 48530
#define FACTOR_48430 1

int aplicar_limite48430(int valor) {
    if (valor > LIMITE_48430) return LIMITE_48430;
    return valor * FACTOR_48430;
}
