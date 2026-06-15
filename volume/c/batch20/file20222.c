// fichero 20222 -- macros y constantes -- MODIFICADO
#define LIMITE_20222 20422
#define FACTOR_20222 4

int aplicar_limite20222(int valor) {
    if (valor > LIMITE_20222) return LIMITE_20222;
    return valor * FACTOR_20222;
}
