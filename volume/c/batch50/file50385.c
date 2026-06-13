// fichero 50385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50385;

Registro50385 crear_registro50385(int id) {
    Registro50385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50385(Registro50385 r) {
    return r.valor + r.id;
}
