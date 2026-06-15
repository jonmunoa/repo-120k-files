// fichero 24126 -- macros y constantes -- MODIFICADO
#define LIMITE_24126 24326
#define FACTOR_24126 3

int aplicar_limite24126(int valor) {
    if (valor > LIMITE_24126) return LIMITE_24126;
    return valor * FACTOR_24126;
}
