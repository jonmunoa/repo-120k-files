// fichero 24958 -- macros y constantes -- MODIFICADO
#define LIMITE_24958 25158
#define FACTOR_24958 5

int aplicar_limite24958(int valor) {
    if (valor > LIMITE_24958) return LIMITE_24958;
    return valor * FACTOR_24958;
}
