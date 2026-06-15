// fichero 11078 -- macros y constantes -- MODIFICADO
#define LIMITE_11078 11278
#define FACTOR_11078 5

int aplicar_limite11078(int valor) {
    if (valor > LIMITE_11078) return LIMITE_11078;
    return valor * FACTOR_11078;
}
