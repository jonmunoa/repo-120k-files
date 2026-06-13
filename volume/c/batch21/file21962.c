// fichero 21962 -- macros y constantes
#define LIMITE_21962 22062
#define FACTOR_21962 3

int aplicar_limite21962(int valor) {
    if (valor > LIMITE_21962) return LIMITE_21962;
    return valor * FACTOR_21962;
}
