// fichero 8498 -- macros y constantes -- MODIFICADO
#define LIMITE_8498 8698
#define FACTOR_8498 5

int aplicar_limite8498(int valor) {
    if (valor > LIMITE_8498) return LIMITE_8498;
    return valor * FACTOR_8498;
}
