// fichero 42502 -- macros y constantes -- MODIFICADO
#define LIMITE_42502 42702
#define FACTOR_42502 4

int aplicar_limite42502(int valor) {
    if (valor > LIMITE_42502) return LIMITE_42502;
    return valor * FACTOR_42502;
}
