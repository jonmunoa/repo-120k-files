// fichero 42610 -- macros y constantes -- MODIFICADO
#define LIMITE_42610 42810
#define FACTOR_42610 2

int aplicar_limite42610(int valor) {
    if (valor > LIMITE_42610) return LIMITE_42610;
    return valor * FACTOR_42610;
}
