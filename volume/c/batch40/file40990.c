// fichero 40990 -- macros y constantes -- MODIFICADO
#define LIMITE_40990 41190
#define FACTOR_40990 2

int aplicar_limite40990(int valor) {
    if (valor > LIMITE_40990) return LIMITE_40990;
    return valor * FACTOR_40990;
}
