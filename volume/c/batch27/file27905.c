// fichero 27905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27905;

Registro27905 crear_registro27905(int id) {
    Registro27905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
