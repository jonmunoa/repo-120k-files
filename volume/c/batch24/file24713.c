// fichero 24713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24713;

Registro24713 crear_registro24713(int id) {
    Registro24713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
