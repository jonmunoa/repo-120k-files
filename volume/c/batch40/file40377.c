// fichero 40377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40377;

Registro40377 crear_registro40377(int id) {
    Registro40377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
