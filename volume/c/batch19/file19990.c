// fichero 19990 -- macros y constantes -- MODIFICADO
#define LIMITE_19990 20190
#define FACTOR_19990 2

int aplicar_limite19990(int valor) {
    if (valor > LIMITE_19990) return LIMITE_19990;
    return valor * FACTOR_19990;
}
