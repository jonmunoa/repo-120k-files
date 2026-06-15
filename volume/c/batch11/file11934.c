// fichero 11934 -- macros y constantes -- MODIFICADO
#define LIMITE_11934 12134
#define FACTOR_11934 6

int aplicar_limite11934(int valor) {
    if (valor > LIMITE_11934) return LIMITE_11934;
    return valor * FACTOR_11934;
}
