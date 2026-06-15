// fichero 11202 -- macros y constantes -- MODIFICADO
#define LIMITE_11202 11402
#define FACTOR_11202 4

int aplicar_limite11202(int valor) {
    if (valor > LIMITE_11202) return LIMITE_11202;
    return valor * FACTOR_11202;
}
