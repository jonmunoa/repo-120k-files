// fichero 6154 -- macros y constantes
#define LIMITE_6154 6254
#define FACTOR_6154 5

int aplicar_limite6154(int valor) {
    if (valor > LIMITE_6154) return LIMITE_6154;
    return valor * FACTOR_6154;
}
