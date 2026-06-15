// fichero 37962 -- macros y constantes -- MODIFICADO
#define LIMITE_37962 38162
#define FACTOR_37962 4

int aplicar_limite37962(int valor) {
    if (valor > LIMITE_37962) return LIMITE_37962;
    return valor * FACTOR_37962;
}
