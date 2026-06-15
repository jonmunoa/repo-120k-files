// fichero 30502 -- macros y constantes -- MODIFICADO
#define LIMITE_30502 30702
#define FACTOR_30502 4

int aplicar_limite30502(int valor) {
    if (valor > LIMITE_30502) return LIMITE_30502;
    return valor * FACTOR_30502;
}
