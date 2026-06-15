// fichero 33614 -- macros y constantes -- MODIFICADO
#define LIMITE_33614 33814
#define FACTOR_33614 6

int aplicar_limite33614(int valor) {
    if (valor > LIMITE_33614) return LIMITE_33614;
    return valor * FACTOR_33614;
}
