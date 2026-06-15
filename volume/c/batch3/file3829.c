// fichero 3829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3829;

Registro3829 crear_registro3829(int id) {
    Registro3829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
