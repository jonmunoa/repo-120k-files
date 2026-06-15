// fichero 48766 -- macros y constantes -- MODIFICADO
#define LIMITE_48766 48966
#define FACTOR_48766 3

int aplicar_limite48766(int valor) {
    if (valor > LIMITE_48766) return LIMITE_48766;
    return valor * FACTOR_48766;
}
