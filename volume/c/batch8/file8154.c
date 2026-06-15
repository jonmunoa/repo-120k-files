// fichero 8154 -- macros y constantes -- MODIFICADO
#define LIMITE_8154 8354
#define FACTOR_8154 6

int aplicar_limite8154(int valor) {
    if (valor > LIMITE_8154) return LIMITE_8154;
    return valor * FACTOR_8154;
}
