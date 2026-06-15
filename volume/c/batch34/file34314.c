// fichero 34314 -- macros y constantes -- MODIFICADO
#define LIMITE_34314 34514
#define FACTOR_34314 6

int aplicar_limite34314(int valor) {
    if (valor > LIMITE_34314) return LIMITE_34314;
    return valor * FACTOR_34314;
}
