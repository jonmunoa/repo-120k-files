// fichero 48362 -- macros y constantes -- MODIFICADO
#define LIMITE_48362 48562
#define FACTOR_48362 4

int aplicar_limite48362(int valor) {
    if (valor > LIMITE_48362) return LIMITE_48362;
    return valor * FACTOR_48362;
}
