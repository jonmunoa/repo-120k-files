// fichero 27314 -- macros y constantes -- MODIFICADO
#define LIMITE_27314 27514
#define FACTOR_27314 6

int aplicar_limite27314(int valor) {
    if (valor > LIMITE_27314) return LIMITE_27314;
    return valor * FACTOR_27314;
}
