// fichero 27057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27057;

Registro27057 crear_registro27057(int id) {
    Registro27057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
