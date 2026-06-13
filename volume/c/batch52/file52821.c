// fichero 52821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52821;

Registro52821 crear_registro52821(int id) {
    Registro52821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52821(Registro52821 r) {
    return r.valor + r.id;
}
