// fichero 25002 -- macros y constantes -- MODIFICADO
#define LIMITE_25002 25202
#define FACTOR_25002 4

int aplicar_limite25002(int valor) {
    if (valor > LIMITE_25002) return LIMITE_25002;
    return valor * FACTOR_25002;
}
