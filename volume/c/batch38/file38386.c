// fichero 38386 -- macros y constantes -- MODIFICADO
#define LIMITE_38386 38586
#define FACTOR_38386 3

int aplicar_limite38386(int valor) {
    if (valor > LIMITE_38386) return LIMITE_38386;
    return valor * FACTOR_38386;
}
