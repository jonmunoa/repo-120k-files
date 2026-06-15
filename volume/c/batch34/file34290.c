// fichero 34290 -- macros y constantes -- MODIFICADO
#define LIMITE_34290 34490
#define FACTOR_34290 2

int aplicar_limite34290(int valor) {
    if (valor > LIMITE_34290) return LIMITE_34290;
    return valor * FACTOR_34290;
}
