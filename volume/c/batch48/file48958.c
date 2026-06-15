// fichero 48958 -- macros y constantes -- MODIFICADO
#define LIMITE_48958 49158
#define FACTOR_48958 5

int aplicar_limite48958(int valor) {
    if (valor > LIMITE_48958) return LIMITE_48958;
    return valor * FACTOR_48958;
}
