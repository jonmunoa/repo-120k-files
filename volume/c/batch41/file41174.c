// fichero 41174 -- macros y constantes -- MODIFICADO
#define LIMITE_41174 41374
#define FACTOR_41174 6

int aplicar_limite41174(int valor) {
    if (valor > LIMITE_41174) return LIMITE_41174;
    return valor * FACTOR_41174;
}
