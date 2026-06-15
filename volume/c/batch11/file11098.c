// fichero 11098 -- macros y constantes -- MODIFICADO
#define LIMITE_11098 11298
#define FACTOR_11098 5

int aplicar_limite11098(int valor) {
    if (valor > LIMITE_11098) return LIMITE_11098;
    return valor * FACTOR_11098;
}
