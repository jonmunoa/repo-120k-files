// fichero 27917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27917;

Registro27917 crear_registro27917(int id) {
    Registro27917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
