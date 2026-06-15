// fichero 32358 -- macros y constantes -- MODIFICADO
#define LIMITE_32358 32558
#define FACTOR_32358 5

int aplicar_limite32358(int valor) {
    if (valor > LIMITE_32358) return LIMITE_32358;
    return valor * FACTOR_32358;
}
