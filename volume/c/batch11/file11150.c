// fichero 11150 -- macros y constantes -- MODIFICADO
#define LIMITE_11150 11350
#define FACTOR_11150 2

int aplicar_limite11150(int valor) {
    if (valor > LIMITE_11150) return LIMITE_11150;
    return valor * FACTOR_11150;
}
