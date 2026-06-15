// fichero 20750 -- macros y constantes -- MODIFICADO
#define LIMITE_20750 20950
#define FACTOR_20750 2

int aplicar_limite20750(int valor) {
    if (valor > LIMITE_20750) return LIMITE_20750;
    return valor * FACTOR_20750;
}
