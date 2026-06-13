// fichero 34917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34917;

Registro34917 crear_registro34917(int id) {
    Registro34917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34917(Registro34917 r) {
    return r.valor + r.id;
}
