// fichero 50221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50221;

Registro50221 crear_registro50221(int id) {
    Registro50221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50221(Registro50221 r) {
    return r.valor + r.id;
}
