// fichero 24958 -- macros y constantes
#define LIMITE_24958 25058
#define FACTOR_24958 4

int aplicar_limite24958(int valor) {
    if (valor > LIMITE_24958) return LIMITE_24958;
    return valor * FACTOR_24958;
}
