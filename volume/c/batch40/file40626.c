// fichero 40626 -- macros y constantes -- MODIFICADO
#define LIMITE_40626 40826
#define FACTOR_40626 3

int aplicar_limite40626(int valor) {
    if (valor > LIMITE_40626) return LIMITE_40626;
    return valor * FACTOR_40626;
}
