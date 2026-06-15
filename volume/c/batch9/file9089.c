// fichero 9089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9089;

Registro9089 crear_registro9089(int id) {
    Registro9089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
