// fichero 30498 -- macros y constantes -- MODIFICADO
#define LIMITE_30498 30698
#define FACTOR_30498 5

int aplicar_limite30498(int valor) {
    if (valor > LIMITE_30498) return LIMITE_30498;
    return valor * FACTOR_30498;
}
