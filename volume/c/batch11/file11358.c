// fichero 11358 -- macros y constantes -- MODIFICADO
#define LIMITE_11358 11558
#define FACTOR_11358 5

int aplicar_limite11358(int valor) {
    if (valor > LIMITE_11358) return LIMITE_11358;
    return valor * FACTOR_11358;
}
