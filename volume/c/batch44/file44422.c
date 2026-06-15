// fichero 44422 -- macros y constantes -- MODIFICADO
#define LIMITE_44422 44622
#define FACTOR_44422 4

int aplicar_limite44422(int valor) {
    if (valor > LIMITE_44422) return LIMITE_44422;
    return valor * FACTOR_44422;
}
