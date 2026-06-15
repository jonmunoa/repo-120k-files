// fichero 14425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14425;

Registro14425 crear_registro14425(int id) {
    Registro14425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
