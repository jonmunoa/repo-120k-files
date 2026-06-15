// fichero 32314 -- macros y constantes -- MODIFICADO
#define LIMITE_32314 32514
#define FACTOR_32314 6

int aplicar_limite32314(int valor) {
    if (valor > LIMITE_32314) return LIMITE_32314;
    return valor * FACTOR_32314;
}
