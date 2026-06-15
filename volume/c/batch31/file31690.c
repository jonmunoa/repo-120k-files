// fichero 31690 -- macros y constantes -- MODIFICADO
#define LIMITE_31690 31890
#define FACTOR_31690 2

int aplicar_limite31690(int valor) {
    if (valor > LIMITE_31690) return LIMITE_31690;
    return valor * FACTOR_31690;
}
