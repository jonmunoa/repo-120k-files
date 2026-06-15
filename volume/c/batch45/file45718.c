// fichero 45718 -- macros y constantes -- MODIFICADO
#define LIMITE_45718 45918
#define FACTOR_45718 5

int aplicar_limite45718(int valor) {
    if (valor > LIMITE_45718) return LIMITE_45718;
    return valor * FACTOR_45718;
}
