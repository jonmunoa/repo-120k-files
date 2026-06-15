// fichero 48905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48905;

Registro48905 crear_registro48905(int id) {
    Registro48905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
