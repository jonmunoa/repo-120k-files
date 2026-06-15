// fichero 44106 -- macros y constantes -- MODIFICADO
#define LIMITE_44106 44306
#define FACTOR_44106 3

int aplicar_limite44106(int valor) {
    if (valor > LIMITE_44106) return LIMITE_44106;
    return valor * FACTOR_44106;
}
