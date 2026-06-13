// fichero 33154 -- macros y constantes
#define LIMITE_33154 33254
#define FACTOR_33154 5

int aplicar_limite33154(int valor) {
    if (valor > LIMITE_33154) return LIMITE_33154;
    return valor * FACTOR_33154;
}
