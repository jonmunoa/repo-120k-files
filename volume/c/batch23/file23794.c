// fichero 23794 -- macros y constantes -- MODIFICADO
#define LIMITE_23794 23994
#define FACTOR_23794 6

int aplicar_limite23794(int valor) {
    if (valor > LIMITE_23794) return LIMITE_23794;
    return valor * FACTOR_23794;
}
