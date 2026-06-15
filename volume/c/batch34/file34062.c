// fichero 34062 -- macros y constantes -- MODIFICADO
#define LIMITE_34062 34262
#define FACTOR_34062 4

int aplicar_limite34062(int valor) {
    if (valor > LIMITE_34062) return LIMITE_34062;
    return valor * FACTOR_34062;
}
