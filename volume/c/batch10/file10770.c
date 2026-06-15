// fichero 10770 -- macros y constantes -- MODIFICADO
#define LIMITE_10770 10970
#define FACTOR_10770 2

int aplicar_limite10770(int valor) {
    if (valor > LIMITE_10770) return LIMITE_10770;
    return valor * FACTOR_10770;
}
