// fichero 24502 -- macros y constantes -- MODIFICADO
#define LIMITE_24502 24702
#define FACTOR_24502 4

int aplicar_limite24502(int valor) {
    if (valor > LIMITE_24502) return LIMITE_24502;
    return valor * FACTOR_24502;
}
