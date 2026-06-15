// fichero 40498 -- macros y constantes -- MODIFICADO
#define LIMITE_40498 40698
#define FACTOR_40498 5

int aplicar_limite40498(int valor) {
    if (valor > LIMITE_40498) return LIMITE_40498;
    return valor * FACTOR_40498;
}
