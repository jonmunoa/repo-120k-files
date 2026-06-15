// fichero 29002 -- macros y constantes -- MODIFICADO
#define LIMITE_29002 29202
#define FACTOR_29002 4

int aplicar_limite29002(int valor) {
    if (valor > LIMITE_29002) return LIMITE_29002;
    return valor * FACTOR_29002;
}
