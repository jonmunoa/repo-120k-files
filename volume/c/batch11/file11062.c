// fichero 11062 -- macros y constantes -- MODIFICADO
#define LIMITE_11062 11262
#define FACTOR_11062 4

int aplicar_limite11062(int valor) {
    if (valor > LIMITE_11062) return LIMITE_11062;
    return valor * FACTOR_11062;
}
