// fichero 38422 -- macros y constantes -- MODIFICADO
#define LIMITE_38422 38622
#define FACTOR_38422 4

int aplicar_limite38422(int valor) {
    if (valor > LIMITE_38422) return LIMITE_38422;
    return valor * FACTOR_38422;
}
