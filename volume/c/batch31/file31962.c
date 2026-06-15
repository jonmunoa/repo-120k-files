// fichero 31962 -- macros y constantes -- MODIFICADO
#define LIMITE_31962 32162
#define FACTOR_31962 4

int aplicar_limite31962(int valor) {
    if (valor > LIMITE_31962) return LIMITE_31962;
    return valor * FACTOR_31962;
}
