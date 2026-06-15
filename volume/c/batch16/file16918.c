// fichero 16918 -- macros y constantes -- MODIFICADO
#define LIMITE_16918 17118
#define FACTOR_16918 5

int aplicar_limite16918(int valor) {
    if (valor > LIMITE_16918) return LIMITE_16918;
    return valor * FACTOR_16918;
}
