// fichero 24154 -- macros y constantes -- MODIFICADO
#define LIMITE_24154 24354
#define FACTOR_24154 6

int aplicar_limite24154(int valor) {
    if (valor > LIMITE_24154) return LIMITE_24154;
    return valor * FACTOR_24154;
}
