// fichero 28498 -- macros y constantes -- MODIFICADO
#define LIMITE_28498 28698
#define FACTOR_28498 5

int aplicar_limite28498(int valor) {
    if (valor > LIMITE_28498) return LIMITE_28498;
    return valor * FACTOR_28498;
}
