// fichero 48430 -- macros y constantes -- MODIFICADO
#define LIMITE_48430 48630
#define FACTOR_48430 2

int aplicar_limite48430(int valor) {
    if (valor > LIMITE_48430) return LIMITE_48430;
    return valor * FACTOR_48430;
}
