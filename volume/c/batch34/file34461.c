// fichero 34461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34461;

Registro34461 crear_registro34461(int id) {
    Registro34461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34461(Registro34461 r) {
    return r.valor + r.id;
}
