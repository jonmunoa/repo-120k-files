// fichero 3657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3657;

Registro3657 crear_registro3657(int id) {
    Registro3657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
