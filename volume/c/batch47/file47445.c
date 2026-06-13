// fichero 47445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47445;

Registro47445 crear_registro47445(int id) {
    Registro47445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47445(Registro47445 r) {
    return r.valor + r.id;
}
