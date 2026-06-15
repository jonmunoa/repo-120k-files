// fichero 19470 -- macros y constantes -- MODIFICADO
#define LIMITE_19470 19670
#define FACTOR_19470 2

int aplicar_limite19470(int valor) {
    if (valor > LIMITE_19470) return LIMITE_19470;
    return valor * FACTOR_19470;
}
