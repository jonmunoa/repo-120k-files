// fichero 40338 -- macros y constantes -- MODIFICADO
#define LIMITE_40338 40538
#define FACTOR_40338 5

int aplicar_limite40338(int valor) {
    if (valor > LIMITE_40338) return LIMITE_40338;
    return valor * FACTOR_40338;
}
