// fichero 31978 -- macros y constantes -- MODIFICADO
#define LIMITE_31978 32178
#define FACTOR_31978 5

int aplicar_limite31978(int valor) {
    if (valor > LIMITE_31978) return LIMITE_31978;
    return valor * FACTOR_31978;
}
