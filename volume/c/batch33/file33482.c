// fichero 33482 -- macros y constantes -- MODIFICADO
#define LIMITE_33482 33682
#define FACTOR_33482 4

int aplicar_limite33482(int valor) {
    if (valor > LIMITE_33482) return LIMITE_33482;
    return valor * FACTOR_33482;
}
