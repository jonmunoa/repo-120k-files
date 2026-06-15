// fichero 24602 -- macros y constantes -- MODIFICADO
#define LIMITE_24602 24802
#define FACTOR_24602 4

int aplicar_limite24602(int valor) {
    if (valor > LIMITE_24602) return LIMITE_24602;
    return valor * FACTOR_24602;
}
