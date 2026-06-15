// fichero 37958 -- macros y constantes -- MODIFICADO
#define LIMITE_37958 38158
#define FACTOR_37958 5

int aplicar_limite37958(int valor) {
    if (valor > LIMITE_37958) return LIMITE_37958;
    return valor * FACTOR_37958;
}
