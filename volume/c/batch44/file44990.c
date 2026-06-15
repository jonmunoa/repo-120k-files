// fichero 44990 -- macros y constantes -- MODIFICADO
#define LIMITE_44990 45190
#define FACTOR_44990 2

int aplicar_limite44990(int valor) {
    if (valor > LIMITE_44990) return LIMITE_44990;
    return valor * FACTOR_44990;
}
