// fichero 40370 -- macros y constantes -- MODIFICADO
#define LIMITE_40370 40570
#define FACTOR_40370 2

int aplicar_limite40370(int valor) {
    if (valor > LIMITE_40370) return LIMITE_40370;
    return valor * FACTOR_40370;
}
