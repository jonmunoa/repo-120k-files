// fichero 44978 -- macros y constantes -- MODIFICADO
#define LIMITE_44978 45178
#define FACTOR_44978 5

int aplicar_limite44978(int valor) {
    if (valor > LIMITE_44978) return LIMITE_44978;
    return valor * FACTOR_44978;
}
