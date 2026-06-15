// fichero 47830 -- macros y constantes -- MODIFICADO
#define LIMITE_47830 48030
#define FACTOR_47830 2

int aplicar_limite47830(int valor) {
    if (valor > LIMITE_47830) return LIMITE_47830;
    return valor * FACTOR_47830;
}
