// fichero 9981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9981;

Registro9981 crear_registro9981(int id) {
    Registro9981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9981(Registro9981 r) {
    return r.valor + r.id;
}
