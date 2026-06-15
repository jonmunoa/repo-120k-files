// fichero 17917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17917;

Registro17917 crear_registro17917(int id) {
    Registro17917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
