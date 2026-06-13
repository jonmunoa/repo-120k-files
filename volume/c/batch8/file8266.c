// fichero 8266 -- macros y constantes
#define LIMITE_8266 8366
#define FACTOR_8266 2

int aplicar_limite8266(int valor) {
    if (valor > LIMITE_8266) return LIMITE_8266;
    return valor * FACTOR_8266;
}
