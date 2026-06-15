// fichero 21610 -- macros y constantes -- MODIFICADO
#define LIMITE_21610 21810
#define FACTOR_21610 2

int aplicar_limite21610(int valor) {
    if (valor > LIMITE_21610) return LIMITE_21610;
    return valor * FACTOR_21610;
}
