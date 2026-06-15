// fichero 48786 -- macros y constantes -- MODIFICADO
#define LIMITE_48786 48986
#define FACTOR_48786 3

int aplicar_limite48786(int valor) {
    if (valor > LIMITE_48786) return LIMITE_48786;
    return valor * FACTOR_48786;
}
