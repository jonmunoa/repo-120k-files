// fichero 10718 -- macros y constantes -- MODIFICADO
#define LIMITE_10718 10918
#define FACTOR_10718 5

int aplicar_limite10718(int valor) {
    if (valor > LIMITE_10718) return LIMITE_10718;
    return valor * FACTOR_10718;
}
