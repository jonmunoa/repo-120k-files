// fichero 41317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41317;

Registro41317 crear_registro41317(int id) {
    Registro41317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
