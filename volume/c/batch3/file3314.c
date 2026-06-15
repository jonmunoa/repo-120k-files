// fichero 3314 -- macros y constantes -- MODIFICADO
#define LIMITE_3314 3514
#define FACTOR_3314 6

int aplicar_limite3314(int valor) {
    if (valor > LIMITE_3314) return LIMITE_3314;
    return valor * FACTOR_3314;
}
