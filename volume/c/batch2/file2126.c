// fichero 2126 -- macros y constantes -- MODIFICADO
#define LIMITE_2126 2326
#define FACTOR_2126 3

int aplicar_limite2126(int valor) {
    if (valor > LIMITE_2126) return LIMITE_2126;
    return valor * FACTOR_2126;
}
