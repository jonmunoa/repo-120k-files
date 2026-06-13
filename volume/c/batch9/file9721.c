// fichero 9721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9721;

Registro9721 crear_registro9721(int id) {
    Registro9721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9721(Registro9721 r) {
    return r.valor + r.id;
}
