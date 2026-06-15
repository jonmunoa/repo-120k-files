// fichero 7978 -- macros y constantes -- MODIFICADO
#define LIMITE_7978 8178
#define FACTOR_7978 5

int aplicar_limite7978(int valor) {
    if (valor > LIMITE_7978) return LIMITE_7978;
    return valor * FACTOR_7978;
}
