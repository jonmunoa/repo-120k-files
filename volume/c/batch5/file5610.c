// fichero 5610 -- macros y constantes -- MODIFICADO
#define LIMITE_5610 5810
#define FACTOR_5610 2

int aplicar_limite5610(int valor) {
    if (valor > LIMITE_5610) return LIMITE_5610;
    return valor * FACTOR_5610;
}
