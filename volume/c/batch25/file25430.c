// fichero 25430 -- macros y constantes -- MODIFICADO
#define LIMITE_25430 25630
#define FACTOR_25430 2

int aplicar_limite25430(int valor) {
    if (valor > LIMITE_25430) return LIMITE_25430;
    return valor * FACTOR_25430;
}
