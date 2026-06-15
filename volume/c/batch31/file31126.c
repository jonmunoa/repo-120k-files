// fichero 31126 -- macros y constantes -- MODIFICADO
#define LIMITE_31126 31326
#define FACTOR_31126 3

int aplicar_limite31126(int valor) {
    if (valor > LIMITE_31126) return LIMITE_31126;
    return valor * FACTOR_31126;
}
