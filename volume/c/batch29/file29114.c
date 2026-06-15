// fichero 29114 -- macros y constantes -- MODIFICADO
#define LIMITE_29114 29314
#define FACTOR_29114 6

int aplicar_limite29114(int valor) {
    if (valor > LIMITE_29114) return LIMITE_29114;
    return valor * FACTOR_29114;
}
