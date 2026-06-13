// fichero 33302 -- macros y constantes
#define LIMITE_33302 33402
#define FACTOR_33302 3

int aplicar_limite33302(int valor) {
    if (valor > LIMITE_33302) return LIMITE_33302;
    return valor * FACTOR_33302;
}
