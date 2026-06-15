// fichero 27793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27793;

Registro27793 crear_registro27793(int id) {
    Registro27793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
