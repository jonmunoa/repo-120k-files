// fichero 21962 -- macros y constantes -- MODIFICADO
#define LIMITE_21962 22162
#define FACTOR_21962 4

int aplicar_limite21962(int valor) {
    if (valor > LIMITE_21962) return LIMITE_21962;
    return valor * FACTOR_21962;
}
