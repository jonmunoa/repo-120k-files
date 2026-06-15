// fichero 40422 -- macros y constantes -- MODIFICADO
#define LIMITE_40422 40622
#define FACTOR_40422 4

int aplicar_limite40422(int valor) {
    if (valor > LIMITE_40422) return LIMITE_40422;
    return valor * FACTOR_40422;
}
