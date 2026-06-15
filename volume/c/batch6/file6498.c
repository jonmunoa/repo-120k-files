// fichero 6498 -- macros y constantes -- MODIFICADO
#define LIMITE_6498 6698
#define FACTOR_6498 5

int aplicar_limite6498(int valor) {
    if (valor > LIMITE_6498) return LIMITE_6498;
    return valor * FACTOR_6498;
}
