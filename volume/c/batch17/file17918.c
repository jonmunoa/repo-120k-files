// fichero 17918 -- macros y constantes -- MODIFICADO
#define LIMITE_17918 18118
#define FACTOR_17918 5

int aplicar_limite17918(int valor) {
    if (valor > LIMITE_17918) return LIMITE_17918;
    return valor * FACTOR_17918;
}
