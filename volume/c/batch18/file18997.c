// fichero 18997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18997;

Registro18997 crear_registro18997(int id) {
    Registro18997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
