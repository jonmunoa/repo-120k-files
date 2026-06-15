// fichero 25522 -- macros y constantes -- MODIFICADO
#define LIMITE_25522 25722
#define FACTOR_25522 4

int aplicar_limite25522(int valor) {
    if (valor > LIMITE_25522) return LIMITE_25522;
    return valor * FACTOR_25522;
}
