// fichero 15154 -- macros y constantes -- MODIFICADO
#define LIMITE_15154 15354
#define FACTOR_15154 6

int aplicar_limite15154(int valor) {
    if (valor > LIMITE_15154) return LIMITE_15154;
    return valor * FACTOR_15154;
}
