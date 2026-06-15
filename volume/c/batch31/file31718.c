// fichero 31718 -- macros y constantes -- MODIFICADO
#define LIMITE_31718 31918
#define FACTOR_31718 5

int aplicar_limite31718(int valor) {
    if (valor > LIMITE_31718) return LIMITE_31718;
    return valor * FACTOR_31718;
}
