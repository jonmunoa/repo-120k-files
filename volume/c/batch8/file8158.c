// fichero 8158 -- macros y constantes -- MODIFICADO
#define LIMITE_8158 8358
#define FACTOR_8158 5

int aplicar_limite8158(int valor) {
    if (valor > LIMITE_8158) return LIMITE_8158;
    return valor * FACTOR_8158;
}
