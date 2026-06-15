// fichero 40369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40369;

Registro40369 crear_registro40369(int id) {
    Registro40369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
