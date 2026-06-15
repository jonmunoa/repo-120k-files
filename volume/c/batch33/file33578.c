// fichero 33578 -- macros y constantes -- MODIFICADO
#define LIMITE_33578 33778
#define FACTOR_33578 5

int aplicar_limite33578(int valor) {
    if (valor > LIMITE_33578) return LIMITE_33578;
    return valor * FACTOR_33578;
}
