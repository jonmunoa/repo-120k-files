// fichero 40925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40925;

Registro40925 crear_registro40925(int id) {
    Registro40925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
