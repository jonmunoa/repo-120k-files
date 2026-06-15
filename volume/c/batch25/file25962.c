// fichero 25962 -- macros y constantes -- MODIFICADO
#define LIMITE_25962 26162
#define FACTOR_25962 4

int aplicar_limite25962(int valor) {
    if (valor > LIMITE_25962) return LIMITE_25962;
    return valor * FACTOR_25962;
}
