// fichero 24658 -- macros y constantes -- MODIFICADO
#define LIMITE_24658 24858
#define FACTOR_24658 5

int aplicar_limite24658(int valor) {
    if (valor > LIMITE_24658) return LIMITE_24658;
    return valor * FACTOR_24658;
}
