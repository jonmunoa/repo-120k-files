// fichero 37962 -- macros y constantes
#define LIMITE_37962 38062
#define FACTOR_37962 3

int aplicar_limite37962(int valor) {
    if (valor > LIMITE_37962) return LIMITE_37962;
    return valor * FACTOR_37962;
}
