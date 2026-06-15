// fichero 34918 -- macros y constantes -- MODIFICADO
#define LIMITE_34918 35118
#define FACTOR_34918 5

int aplicar_limite34918(int valor) {
    if (valor > LIMITE_34918) return LIMITE_34918;
    return valor * FACTOR_34918;
}
