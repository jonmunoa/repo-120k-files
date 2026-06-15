// fichero 16358 -- macros y constantes -- MODIFICADO
#define LIMITE_16358 16558
#define FACTOR_16358 5

int aplicar_limite16358(int valor) {
    if (valor > LIMITE_16358) return LIMITE_16358;
    return valor * FACTOR_16358;
}
