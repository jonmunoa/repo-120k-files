// fichero 10918 -- macros y constantes -- MODIFICADO
#define LIMITE_10918 11118
#define FACTOR_10918 5

int aplicar_limite10918(int valor) {
    if (valor > LIMITE_10918) return LIMITE_10918;
    return valor * FACTOR_10918;
}
