// fichero 19610 -- macros y constantes -- MODIFICADO
#define LIMITE_19610 19810
#define FACTOR_19610 2

int aplicar_limite19610(int valor) {
    if (valor > LIMITE_19610) return LIMITE_19610;
    return valor * FACTOR_19610;
}
