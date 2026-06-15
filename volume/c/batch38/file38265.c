// fichero 38265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38265;

Registro38265 crear_registro38265(int id) {
    Registro38265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
