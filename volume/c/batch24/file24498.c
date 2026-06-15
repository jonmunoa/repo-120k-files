// fichero 24498 -- macros y constantes -- MODIFICADO
#define LIMITE_24498 24698
#define FACTOR_24498 5

int aplicar_limite24498(int valor) {
    if (valor > LIMITE_24498) return LIMITE_24498;
    return valor * FACTOR_24498;
}
