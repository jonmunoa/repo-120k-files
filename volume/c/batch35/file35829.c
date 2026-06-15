// fichero 35829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35829;

Registro35829 crear_registro35829(int id) {
    Registro35829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
