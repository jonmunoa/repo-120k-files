// fichero 27181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27181;

Registro27181 crear_registro27181(int id) {
    Registro27181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
