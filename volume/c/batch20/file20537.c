// fichero 20537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20537;

Registro20537 crear_registro20537(int id) {
    Registro20537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
