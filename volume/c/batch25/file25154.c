// fichero 25154 -- macros y constantes -- MODIFICADO
#define LIMITE_25154 25354
#define FACTOR_25154 6

int aplicar_limite25154(int valor) {
    if (valor > LIMITE_25154) return LIMITE_25154;
    return valor * FACTOR_25154;
}
